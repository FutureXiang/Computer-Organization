.data
	string:.space 80 # max: 20 chars
	char_buffer:.space 4 # char + "\n"
	true:  .asciiz "1\n"
	false: .asciiz "0\n"
.text
	# read N to '''$s0'''
	li $v0, 5
	syscall
	move $s0, $v0
	# set string addr to '''$s1'''
	la $s1, string
	la $s2, char_buffer
	
	# for(k=0;k<N;++k), k = '''$t0'''
	li $t0, 0
	for_begin_1:
		slt $t1, $t0, $s0
		beq $t1, $0, for_end_1
		
		li $a1, 3 # max chars = 3, actual readin = 2 = "x"+"\n"
		la $a0, char_buffer
		li $v0, 8
		syscall
		
		lb $t1, 0($s2)
		sb $t1, 0($s1)
		addi $s1, $s1, 1
		
		addi $t0, $t0,1
		j for_begin_1
	for_end_1:
	
	# set string [begin addr to '''$s1'''
	la $s1, string
	# set string end) addr to '''$s2'''
	add $s2, $s1, $s0
	
	#set flag to $s3
	li $s3, 1
	
	# for(k=0;k<N;++k), k = '''$t0'''
	li $t0, 0
	for_begin_2:
		slt $t1, $t0, $s0
		beq $t1, $0, for_end_2
		
		lb $t1, 0($s1)
		addi $s1, $s1, 1
		subi $s2, $s2, 1
		lb $t2, 0($s2)
		
		beq $t1, $t2, else_if
		move $s3, $0 # set to false
		j for_end_2
		
		else_if:
		addi $t0, $t0,1
		j for_begin_2
	for_end_2:
	
	beq $s3, 1, print_true

	print_false:
	la $a0,false
	li $v0,4
	syscall
	j end_if_print
	
	print_true:
	la $a0,true
	li $v0,4
	syscall
	j end_if_print
	
	end_if_print:
	li $v0,10
	syscall