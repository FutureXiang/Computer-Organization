.data
	mat1:.space 400 # max: 10*10 nums
	mat2:.space 400 # max: 10*10 nums
	mat3:.space 400 # max: 10*10 nums
	space:.asciiz " "
	end: .asciiz "\n"
.text
	### mat1: (m1, n1) = (s1, s2)
	li $v0, 5
	syscall
	move $s1, $v0
	li $v0, 5
	syscall
	move $s2, $v0
	### mat2: (m2, n2) = (s3, s4)
	li $v0, 5
	syscall
	move $s3, $v0
	li $v0, 5
	syscall
	move $s4, $v0

	### readin mat1
	# save s7 = m1*n1
	mul $s7, $s1,$s2
	# addr mat1 = $s0
	la $s0, mat1
	# for(k=0;k<m1*n1;++k)
	li $t0, 0
	for_begin_1:
		slt $t1, $t0, $s7
		beq $t1, $0, for_end_1
		
		li $v0,5
		syscall
		move $t1, $v0 # read mat1[i][j] to $t1
		sw $t1, 0($s0) # save to mat1
		addi $s0, $s0, 4
		
		addi $t0, $t0,1
		j for_begin_1
	for_end_1:
	
	### readin mat2
	# save s7 = m2*n2
	mul $s7, $s3,$s4
	# addr mat2 = $s0
	la $s0, mat2
	# for(k=0;k<m2*n2;++k)
	li $t0, 0
	for_begin_2:
		slt $t1, $t0, $s7
		beq $t1, $0, for_end_2
		
		li $v0,5
		syscall
		move $t1, $v0 # read mat2[i][j] to $t1
		sw $t1, 0($s0) # save to mat1
		addi $s0, $s0, 4
		
		addi $t0, $t0,1
		j for_begin_2
	for_end_2:
	
	### calc conv2d: filter = (m2,n2), padding = (0,0), strides = (1,1)
	# m1=s1, n1=s2, m2=s3, n2=s4, m1-m2+1=$s5, n1-n2+1=$s6, mat3 = $s7
	sub $s5, $s1, $s3
	addi $s5, $s5, 1
	sub $s6, $s2, $s4
	addi $s6, $s6, 1
	la $s7, mat3
	
	li $t0, 0
	for_begin_mat3_x:
		slt $t1, $t0, $s5
		beq $t1, $0, for_end_mat3_x
		
		li $t1, 0
		for_begin_mat3_y:
			slt $t2, $t1, $s6
			beq $t2, $0, for_end_mat3_y
			# mat3[x,y] = mat3[t0,t1], t0,t1=[0, size0/1)
			li $s0, 0
			
			li $t2, 0
			for_begin_mat2_x:
				slt $t3, $t2, $s3
				beq $t3, $0, for_end_mat2_x
				li $t3, 0
				for_begin_mat2_y:
					slt $t4, $t3, $s4
					beq $t4, $0, for_end_mat2_y
					
					# s0 += mat2[t2,t3] * mat1[t2+t0, t3+t1]
					# t8 = mat2[t2,t3]
					mul $t5, $t2, $s4
					add $t5, $t5, $t3
					mul $t5, $t5, 4
					la $t4, mat2
					add $t5, $t5, $t4
					lw $t8, 0($t5)
					# t9 = mat1[t2+t0,t3+t1]
					add $t4, $t2, $t0
					add $t5, $t3, $t1
					mul $t6, $t4, $s2
					add $t6, $t6, $t5
					mul $t6, $t6, 4
					la $t4, mat1
					add $t6, $t6, $t4
					lw $t9, 0($t6)
					
					mul $t4, $t8, $t9
					# t4 = mat2[t2,t3] * mat1[t2+t0, t3+t1]
					add $s0, $s0, $t4
					
					addi $t3, $t3,1
					j for_begin_mat2_y
				for_end_mat2_y:
				addi $t2, $t2,1
				j for_begin_mat2_x
			for_end_mat2_x:
			
			# mat3[x][y] = s0 = \Sum {mat2[i,j]*mat1[i+t0,j+t1]}
			#sw $s0, 0($s7)
			#addi $s7, $s7, 4
			move $a0, $s0
			li $v0,1
			syscall
			addi $t4, $t1, 1
			beq $t4, $s6, print_end
			
			print_space:
			la $a0, space
			li $v0,4
			syscall
			j end_print
			
			print_end:
			la $a0, end
			li $v0,4
			syscall
			j end_print
			
			end_print:
			addi $t1, $t1,1
			j for_begin_mat3_y
		for_end_mat3_y:
		addi $t0, $t0,1
		j for_begin_mat3_x
	for_end_mat3_x:
	
	li $v0, 10
	syscall