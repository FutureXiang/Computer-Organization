.data
	mat1:.space 256 # max: 8*8 nums
	mat2:.space 256 # max: 8*8 nums
	mat3:.space 256 # max: 8*8 nums
	space:.asciiz " "
	end: .asciiz "\n"
.text
	# read N to $s0
	li $v0, 5
	syscall
	move $s0, $v0
	
	# read N*N
	mul $s1, $s0,$s0 # save size=N*N to $s1
	
	# addr mat1 = $s2
	la $s2, mat1
	# for(k=0;k<N*N;++k)
	li $t0, 0
	for_begin_1:
		slt $t1, $t0, $s1
		beq $t1, $0, for_end_1
		
		li $v0,5
		syscall
		move $t1, $v0 # read mat1[i][j] to $t1
		
		sw $t1, 0($s2) # save to mat1
		addi $s2, $s2, 4
		
		addi $t0, $t0,1
		j for_begin_1
	for_end_1:
	
	# addr mat2 = $s3
	la $s3, mat2
	# for(k=0;k<N*N;++k)
	li $t0, 0
	for_begin_2:
		slt $t1, $t0, $s1
		beq $t1, $0, for_end_2
		
		li $v0,5
		syscall
		move $t1, $v0 # read mat2[i][j] to $t1
		
		sw $t1, 0($s3) # save to mat2
		addi $s3, $s3, 4
		
		addi $t0, $t0,1
		j for_begin_2
	for_end_2:
	

	# addr mat3 = $s4
	la $s2, mat1
	la $s3, mat2
	la $s4, mat3
	li $s5, 4

	# for($t0=k=0;k<N*N;++k)
	li $t0, 0
	for_begin_3:
		slt $t1, $t0, $s1
		beq $t1, $0, for_end_3
		# mat3[a][b] = mat3[t0*4]
		# a = $t5 = i(t0)//N(s0) + 1
		div $t0, $s0
		mflo $t5
		addiu $t5, $t5, 1
		# b = $t6 = i(t0) mod N(s0) + 1
		mfhi $t6
		addiu $t6, $t6, 1
		
		li $s6, 0
		
		# for(p=0;p<N;++p)
		li $t7, 0
		for_begin_k:
			slt $t1, $t7, $s0
			beq $t1, $0, for_end_k
			
			# mat1[a][k+1] = (4*$t1)(mat1) -> to t3
			subi $t1, $t5, 1
			mul $t1, $t1, $s0
			add $t1, $t1, $t7
			
			mul $t1, $t1, $s5
			add $t1, $t1, $s2
			lw $t3, 0($t1)
			# mat2[k+1][b] = (4*$t2)(mat2) -> to t4
			mul $t2, $t7, $s0
			add $t2, $t2, $t6
			subi $t2, $t2, 1
			
			mul $t2, $t2, $s5
			add $t2, $t2, $s3
			lw $t4, 0($t2)
			
			mul $t1, $t3, $t4 # $t1 = mat1[a][k] * mat2[k][b]
			add $s6, $s6, $t1 # $s6 += $t1
			
			addi $t7, $t7, 1
			j for_begin_k
		for_end_k:
		
		# mat3[a][b]=$s6
		move $a0, $s6
		li $v0,1
		syscall
		beq $t6, $s0, print_end
		print_space:
		la $a0,space
		li $v0,4
		syscall
		j end_if
		print_end:
		la $a0,end
		li $v0,4
		syscall
		end_if:
		
		
		addi $t0, $t0,1
		j for_begin_3
	for_end_3:	
	
	li $v0,10
	syscall