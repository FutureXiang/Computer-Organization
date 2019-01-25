.data
	tuple: .space 30000 # (50*50*4 Bytes)*3
	space: .asciiz " "
	endofline: .asciiz "\n"
.text
	#n (wasted)
	li $v0,5
	syscall
	move $t0, $v0
	#m (saved)
	li $v0,5
	syscall
	move $s1, $v0
	# size = n*m = $t2    (i=0;i<size;++i)
	mul $t2, $t0, $s1
	
	la $s0, tuple # save path
	
	# input matrix----------------
	li $t3, 0 # for ($t3=0; $t3<$t2; $t3++)
	
	for_begin_1:
		slt $t4, $t3, $t2
		beq $0, $t4, for_end_1

		# input $t4 = mat[(a-1)*m+b]
		li $v0,5
		syscall
		move $t4, $v0
		# if $t4!=0 then
		beqz $t4, else_1
		
			# a(t5) = i(t3)//m(s1) + 1
			div $t3, $s1
			mflo $t5
			addiu $t5, $t5, 1
			# b(t6) = i(t3) mod m(s1) + 1
			mfhi $t6
			addiu $t6, $t6, 1
			
			# save(a(t5), b(t6), ele(t4))
			sw $t5, 0($s0)
			sw $t6, 4($s0)
			sw $t4, 8($s0)
			addiu $s0, $s0, 12
		
		else_1: # ++i
			addiu $t3, $t3, 1
			j for_begin_1
		
	for_end_1:
	# print: [tuple, $s0)
	move $t3, $s0
	subi $t3, $t3, 12
	la $t2, tuple
	for_begin_2:
	sle  $t4, $t2, $t3 # if tuple<=i(t3), go on.
	beq $0, $t4, for_end_2
	# [i, i+4, i+8]
	lw $t5, 0($t3)
	lw $t6, 4($t3)
	lw $t4, 8($t3)
	
	move $a0, $t5
	li $v0, 1
	syscall
	la $a0, space
	li $v0, 4
	syscall
	move $a0, $t6
	li $v0, 1
	syscall
	la $a0, space
	li $v0, 4
	syscall
	move $a0, $t4
	li $v0, 1
	syscall
	la $a0, endofline
	li $v0, 4
	syscall
	
	subi $t3, $t3, 12
	j for_begin_2
	
	for_end_2:
	li $v0, 10
	syscall