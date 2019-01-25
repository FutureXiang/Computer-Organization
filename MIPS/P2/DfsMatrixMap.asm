.data
	map:.space 400 # max: 10*10 nums
	vis:.space 400 # max: 10*10 nums
	end: .asciiz "\n"
.text

	j main
	
read_vis:  #(v0=x, v1=y)(a0 = ret) ### used: t0, t1, ra
	mul $t0, $v0, $s2
	add $t0, $t0, $v1
	la $t1, vis
	mul $t0, $t0, 4
	add $t0, $t0, $t1
	
	lw $a0, 0($t0)
	jr $ra

read_map:  #(v0=x, v1=y)(a0 = ret) ### used: t0, t1, ra
	mul $t0, $v0, $s2
	add $t0, $t0, $v1
	la $t1, map
	mul $t0, $t0, 4
	add $t0, $t0, $t1
	
	lw $a0, 0($t0)
	jr $ra

set_vis_1: #(v0=x, v1=y) ### used: t0, t1, ra
	mul $t0, $v0, $s2
	add $t0, $t0, $v1
	la $t1, vis
	mul $t0, $t0, 4
	add $t0, $t0, $t1
	
	li $t1, 1
	sw $t1, 0($t0)
	jr $ra

set_vis_0: #(v0=x, v1=y) ### used: t0, t1, ra
	mul $t0, $v0, $s2
	add $t0, $t0, $v1
	la $t1, vis
	mul $t0, $t0, 4
	add $t0, $t0, $t1
	
	li $t1, 0
	sw $t1, 0($t0)
	jr $ra

check_point: #(v0=x,v1=y) ### used: t0, t1, t2, t3, ra
	sge $t0, $v0, 0
	sge $t1, $v1, 0
	slt $t2, $v0, $s1
	slt $t3, $v1, $s2
	and $t0, $t0, $t1
	and $t2, $t2, $t3
	and $t0, $t0, $t2 # t0 = (nowx>=0 && nowx<M && nowy>=0 && nowy<N), t1,t2,t3 wasted
	beq $t0, $0, check_point_false # don't read vis[-1][0] !
	
	subi $sp, $sp, 12
	sw $t0, 8($sp)
	sw $t1, 4($sp)
	sw $ra, 0($sp)
	move $v0, $v0
	move $v1, $v1
	jal read_vis
	lw $ra, 0($sp)
	lw $t1, 4($sp)
	lw $t0, 8($sp)
	addi $sp, $sp, 12
	li $t1, 1
	sub $t1, $t1, $a0 # t1 = 1 - vis[x][y] = !vis[x][y]
	# t1 = !vis[x][y]
	beq $t1, $0, check_point_false
	
	subi $sp, $sp, 12
	sw $t0, 8($sp)
	sw $t1, 4($sp)
	sw $ra, 0($sp)
	move $v0, $v0
	move $v1, $v1
	jal read_map
	lw $ra, 0($sp)
	lw $t1, 4($sp)
	lw $t0, 8($sp)
	addi $sp, $sp, 12
	li $t1, 1
	sub $t1, $t1, $a0 # t1 = 1 - map[x][y] = !map[x][y]
	# t2 = !map[x][y]
	beq $t2, $0, check_point_false
	
	and $t0, $t0, $t1
	and $t0, $t0, $t2 # t0 = (nowx>=0 && nowx<M && nowy>=0 && nowy<N) && !vis && !map
	
	beq $t0, $0, check_point_false
		li $a0 ,1
		jr $ra
	check_point_false:
		li $a0 ,0
		jr $ra


dfs: #(v0=x, v1=y) ### used: t0, t1, t2, t3, t4, ra
	move $t0, $v0
	move $t1, $v1
	seq $t2, $t0, $s5 # t2 = (x==Tx)
	seq $t3, $t1, $s6 # t3 = (y==Ty)
	and $t2, $t2, $t3 # t2 = (x==Tx && y==Ty)
	beq $t2, $0, not_reached
		addi $s7, $s7, 1
		jr $ra
	not_reached:
	# t0=x, t1=y, t2=nowx, t3=nowy
	case1:
	# case 1: +={-1,0}
	addi $t2, $t0, -1
	addi $t3, $t1, 0
	# if(check_point(nowx,nowy))
	subi $sp, $sp, 20
	sw $t0, 16($sp)
	sw $t1, 12($sp)
	sw $t2, 8($sp)
	sw $t3, 4($sp)
	sw $ra, 0($sp)
	move $v0, $t2
	move $v1, $t3
	jal check_point
	move $t4, $a0 # t4 = true / false
	lw $ra, 0($sp)
	lw $t3, 4($sp)
	lw $t2, 8($sp)
	lw $t1, 12($sp)
	lw $t0, 16($sp)
	addi $sp, $sp, 20
	bne $t4, 1, case2
		# set_vis_1(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_1
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
		# dfs(nowx, nowy)
		subi $sp, $sp, 24
		sw $t4, 20($sp)
		sw $t0, 16($sp)
		sw $t1, 12($sp)
		sw $t2, 8($sp)
		sw $t3, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal dfs
		move $t4, $a0 # t4 = true / false
		lw $ra, 0($sp)
		lw $t3, 4($sp)
		lw $t2, 8($sp)
		lw $t1, 12($sp)
		lw $t0, 16($sp)
		lw $t4, 20($sp)
		addi $sp, $sp, 24
		# set_vis_0(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_0
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
	
	case2:
	# case 2: +={1,0}
	addi $t2, $t0, 1
	addi $t3, $t1, 0
	# if(check_point(nowx,nowy))
	subi $sp, $sp, 20
	sw $t0, 16($sp)
	sw $t1, 12($sp)
	sw $t2, 8($sp)
	sw $t3, 4($sp)
	sw $ra, 0($sp)
	move $v0, $t2
	move $v1, $t3
	jal check_point
	move $t4, $a0 # t4 = true / false
	lw $ra, 0($sp)
	lw $t3, 4($sp)
	lw $t2, 8($sp)
	lw $t1, 12($sp)
	lw $t0, 16($sp)
	addi $sp, $sp, 20
	bne $t4, 1, case3
		# set_vis_1(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_1
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
		# dfs(nowx, nowy)
		subi $sp, $sp, 24
		sw $t4, 20($sp)
		sw $t0, 16($sp)
		sw $t1, 12($sp)
		sw $t2, 8($sp)
		sw $t3, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal dfs
		move $t4, $a0 # t4 = true / false
		lw $ra, 0($sp)
		lw $t3, 4($sp)
		lw $t2, 8($sp)
		lw $t1, 12($sp)
		lw $t0, 16($sp)
		lw $t4, 20($sp)
		addi $sp, $sp, 24
		# set_vis_0(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_0
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
	
	case3:
	# case 3: +={0,-1}
	addi $t2, $t0, 0
	addi $t3, $t1, -1
	# if(check_point(nowx,nowy))
	subi $sp, $sp, 20
	sw $t0, 16($sp)
	sw $t1, 12($sp)
	sw $t2, 8($sp)
	sw $t3, 4($sp)
	sw $ra, 0($sp)
	move $v0, $t2
	move $v1, $t3
	jal check_point
	move $t4, $a0 # t4 = true / false
	lw $ra, 0($sp)
	lw $t3, 4($sp)
	lw $t2, 8($sp)
	lw $t1, 12($sp)
	lw $t0, 16($sp)
	addi $sp, $sp, 20
	bne $t4, 1, case4
		# set_vis_1(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_1
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
		# dfs(nowx, nowy)
		subi $sp, $sp, 24
		sw $t4, 20($sp)
		sw $t0, 16($sp)
		sw $t1, 12($sp)
		sw $t2, 8($sp)
		sw $t3, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal dfs
		move $t4, $a0 # t4 = true / false
		lw $ra, 0($sp)
		lw $t3, 4($sp)
		lw $t2, 8($sp)
		lw $t1, 12($sp)
		lw $t0, 16($sp)
		lw $t4, 20($sp)
		addi $sp, $sp, 24
		# set_vis_0(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_0
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
	
	case4:
	# case 4: +={0,1}
	addi $t2, $t0, 0
	addi $t3, $t1, 1
	# if(check_point(nowx,nowy))
	subi $sp, $sp, 20
	sw $t0, 16($sp)
	sw $t1, 12($sp)
	sw $t2, 8($sp)
	sw $t3, 4($sp)
	sw $ra, 0($sp)
	move $v0, $t2
	move $v1, $t3
	jal check_point
	move $t4, $a0 # t4 = true / false
	lw $ra, 0($sp)
	lw $t3, 4($sp)
	lw $t2, 8($sp)
	lw $t1, 12($sp)
	lw $t0, 16($sp)
	addi $sp, $sp, 20
	bne $t4, 1, case_end
		# set_vis_1(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_1
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
		# dfs(nowx, nowy)
		subi $sp, $sp, 24
		sw $t4, 20($sp)
		sw $t0, 16($sp)
		sw $t1, 12($sp)
		sw $t2, 8($sp)
		sw $t3, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal dfs
		move $t4, $a0 # t4 = true / false
		lw $ra, 0($sp)
		lw $t3, 4($sp)
		lw $t2, 8($sp)
		lw $t1, 12($sp)
		lw $t0, 16($sp)
		lw $t4, 20($sp)
		addi $sp, $sp, 24
		# set_vis_0(nowx, nowy)
		subi $sp, $sp, 12
		sw $t0, 8($sp)
		sw $t1, 4($sp)
		sw $ra, 0($sp)
		move $v0, $t2
		move $v1, $t3
		jal set_vis_0
		lw $ra, 0($sp)
		lw $t1, 4($sp)
		lw $t0, 8($sp)
		addi $sp, $sp, 12
	
	case_end:
		jr $ra
main:
	### map: (m, n) = (s1, s2)
	li $v0, 5
	syscall
	move $s1, $v0
	li $v0, 5
	syscall
	move $s2, $v0

	### readin map
	# save s7 = m1*n1
	mul $s7, $s1,$s2
	# addr map = $s0
	la $s0, map
	# for(k=0;k<m1*n1;++k)
	li $t0, 0
	for_begin_1:
	slt $t1, $t0, $s7
	beq $t1, $0, for_end_1
		li $v0,5
		syscall
		move $t1, $v0 # read map[i][j] to $t1
		sw $t1, 0($s0) # save to map
		addi $s0, $s0, 4
	addi $t0, $t0,1
	j for_begin_1
	for_end_1:
	
	### S: (Sx, Sy) = (s3, s4)
	li $v0, 5
	syscall
	move $s3, $v0
	li $v0, 5
	syscall
	move $s4, $v0
	subi $s3, $s3, 1
	subi $s4, $s4, 1
	
	### T: (Tx, Ty) = (s5, s6)
	li $v0, 5
	syscall
	move $s5, $v0
	li $v0, 5
	syscall
	move $s6, $v0
	subi $s5, $s5, 1
	subi $s6, $s6, 1
	
	# vis[Sx][Sy] = 1
	subi $sp, $sp, 12
	sw $t0, 8($sp)
	sw $t1, 4($sp)
	sw $ra, 0($sp)
	move $v0, $s3
	move $v1, $s4
	jal set_vis_1
	lw $ra, 0($sp)
	lw $t1, 4($sp)
	lw $t0, 8($sp)
	addi $sp, $sp, 12
	
	li $s7, 0 # S7 = ANS = 0
	# dfs(Sx, Sy)
	move $v0, $s3
	move $v1, $s4
	jal dfs
	
	END_OF_WORK:
	li $v0, 1
	move $a0, $s7
	syscall
	
	li $v0, 10
	syscall