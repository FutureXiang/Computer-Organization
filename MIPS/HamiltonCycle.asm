.data
	edge: .space 196	# (7,7) matrix, default: 0
	# start with [edge+(i-1)*7*4, (edge+(i-1)*6+6)*4]: vertex i
	used: .space 28		# (7,)  array,  default: 0
	# start with used+(i-1)*4: vertex i
	False: .asciiz "0\n"
	True:  .asciiz "1\n"
	space: .asciiz " "
	eol:   .asciiz "\n"
.text

j main


dfs:
	move $t0, $a0 # x
	move $t1, $a1 # cnt
	# print("{} {}\n".format(x, cnt))
	#move $a0, $a0
	#li $v0, 1
	#syscall
	#la $a0, space
	#li $v0, 4
	#syscall
	#move $a0, $a1
	#li $v0, 1
	#syscall
	#la $a0, eol
	#li $v0, 4
	#syscall
	
	# x = $t0, cnt = $t1
	bne $t1, $s0, work
	# if(cnt==N): 
	# if(map[1][x]==1): return True
	# else: return False
	# map[1][x] to $t4 == 1
	# t2 index path = $t7
	subi $t7, $t0, 1	# index = x-1
	mul $t7, $t7, 4
	add $t7, $s2, $t7
	lw $t4, 0($t7)		# $t7 = addr = addr(1) + index*4
	
	beq $t4, 0, return_False
	li $v0, 1
	jr $ra
	return_False:
	li $v0, 0
	jr $ra

work:
	li $t2, 1 			# t2 = i. for ($t2=1; $t2<$t3=N+1; $t2++)
	addi $t3, $s0, 1	# t3 = max_i = N+1
	for_begin_vertex:
		slt $t4, $t2, $t3
		beq $0, $t4, for_end_vertex
		
		# if(i!=x && !used[i] && map[x][i])
		# i!=x
		beq $t2, $t0, else_to
		# !used[i]
		subi $t5, $t2, 1
		mul $t5, $t5, 4
		add $t5, $s3, $t5
		lw $t4, 0($t5)	# used[i] = val[used+4*(i-1)]
		beq $t4, 1, else_to
		# map[x][i] to $t4 == 1
		# t0 array path = $t6
		subi $t6, $t0, 1
		mul $t6, $t6, 28	# rlt = (x-1) * 7 * 4
		add $t6, $t6, $s2	# abs = edge + rlt
		# t2 index path = $t7
		subi $t7, $t2, 1	# index = i-1
		mul $t7, $t7, 4
		add $t6, $t6, $t7
		lw $t4, 0($t6)		# $t6 = addr = addr(i) + index*4
		beq $t4, 0, else_to
		
		# then used[i]=1, dfs(i, cnt+1)
		li $t4, 1
		sw $t4, 0($t5)	# used[i] = 1

		subi $sp, $sp, 24
		sw $t0, 20($sp)		# x
		sw $t1, 16($sp)		# cnt
		sw $t2, 12($sp)		# i
		sw $t3, 8($sp)		# max_i)
		sw $t5, 4($sp)		# addr of used[i]
		sw $ra, 0($sp)		# $ra
		
		move $a0, $t2		# dfs(i, cnt+1)
		addi $a1, $t1, 1
		jal dfs
		
		lw $ra, 0($sp)		# $ra
		lw $t5, 4($sp)		# addr of used[i]
		lw $t3, 8($sp)		# max_i)
		lw $t2, 12($sp)		# i
		lw $t1, 16($sp)		# cnt
		lw $t0, 20($sp)		# x
		addi $sp, $sp, 24
		
		bne $v0, 1, no_return_True
		li $v0, 1	# if(dfs(i, cnt+1)): return True
		jr $ra
		
		no_return_True:
		li $t4, 0
		sw $t4, 0($t5)	# used[i] = 0
		
		
	else_to:
	addi $t2, $t2, 1
	j for_begin_vertex
	for_end_vertex:
	# return false
	li $v0, 0
	jr $ra
	
main:
	# $s0(n)
	li $v0,5
	syscall
	move $s0, $v0
	# $s1(m)
	li $v0,5
	syscall
	move $s1, $v0
	la $s2, edge
	la $s3, used
	
	# input undirected edges:
	li $t0, 0 # for ($t0=0; $t0 < m; $t0++)
	for_begin_1:
	slt $t1, $t0, $s1
	beq $0, $t1, for_end_1
		li $v0,5
		syscall
		move $t1, $v0
		li $v0,5
		syscall
		move $t2, $v0	# (t1, t2)
		
		# add edge (i->j)(t1->t2)
		# t1 array path = $t3
		subi $t3, $t1, 1
		mul $t3, $t3, 28	# rlt = (i-1) * 7 * 4
		add $t3, $t3, $s2	# abs = edge + rlt
		# t2 index path = $t4
		subi $t4, $t2, 1	# index = j-1
		mul $t4, $t4, 4
		li $t5, 1
		add $t3, $t3, $t4
		sw $t5, 0($t3)		# addr = addr(i) + index*4
		
		# add edge (i->j)(t2->t1)
		# t2 array path = $t3
		subi $t3, $t2, 1
		mul $t3, $t3, 28	# rlt = (i-1) * 7 * 4
		add $t3, $t3, $s2	# abs = edge + rlt
		# t1 index path = $t4
		subi $t4, $t1, 1	# index = j-1
		mul $t4, $t4, 4
		li $t5, 1
		add $t3, $t3, $t4
		sw $t5, 0($t3)		# addr = addr(i) + index*4
		
	addiu $t0, $t0, 1
	j for_begin_1
	for_end_1:
	
	
	# cycle = [1,...,1], set used[1] = True
	li $t0, 1
	sw $t0, 0($s3)
	# dfs(x=1, cnt=1)
	li $a0, 1
	li $a1, 1
	jal dfs
	
	beq $v0, 1, print_True
	
	print_False:
	la $a0, False
	li $v0, 4
	syscall
	j END_OF_PROGRAM
	
	print_True:
	la $a0, True
	li $v0, 4
	syscall
	j END_OF_PROGRAM
	# no $t* should be recovered. [$s0 = n, $s2 = edge, $s3 = used] are global vars.
	
	END_OF_PROGRAM:
	li $v0,10
	syscall