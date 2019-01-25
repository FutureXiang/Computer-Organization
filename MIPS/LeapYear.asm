.text
	li $v0, 5
	syscall
	move $t0, $v0 # int: year number
	
	li $t1,400
	li $t2,100
	li $t3,4
	#if Div By 400 <=> if HI==0
	div $t0,$t1
	mfhi $t4
	beq $t4,$0, DivBy400
	# else if Div By 100
	div $t0,$t2
	mfhi $t4
	beq $t4,$0, DivBy100ButNotBy400
	# else: Not By 100 But By 4
	div $t0,$t3
	mfhi $t4
	beq $t4,$0, DivBy4ButNotBy100
	# else: Not By 4
	li $a0, 0 # output: 0
	li $v0, 1
	syscall
	j end
	
	DivBy400:
	li $a0, 1 # output: 1
	li $v0, 1
	syscall
	j end
	
	DivBy100ButNotBy400:
	li $a0, 0 # output: 0
	li $v0, 1
	syscall
	j end
	
	DivBy4ButNotBy100:
	li $a0, 1 # output: 0
	li $v0, 1
	syscall
	j end
	
	
	end:
	li $v0, 10	# end
	syscall