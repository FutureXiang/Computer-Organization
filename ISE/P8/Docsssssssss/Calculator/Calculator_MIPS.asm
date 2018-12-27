.text 0x3000
	li $s3, 0x7f2c	# 64 switches
	li $s5, 0x7f38	#  9 digital tubes
	li $s6, 0x7f40	#  8 user buttons
	
	start:
	lw $t1, 4($s3)  # op1 from higher 32 bit
	lw $t2, 0($s3)	# op2 from lower  32 bit
	lw $t0, 0($s6)	# op code from user buttons
	# 0: +
	# 1: -
	# 2: &
	# 3: |
	# 4: ^
	# 5: ~(|)
	# 6: <<
	# 7: >>
	case:
		beq $t0, 0, caseno		# zero-hot: maintain previous result !!
		nop
		# one-hot: calculate according to the mode chosen !
		beq $t0, 1, case0
		nop
		beq $t0, 2, case1
		nop
		beq $t0, 4, case2
		nop
		beq $t0, 8, case3
		nop
		beq $t0, 16, case4
		nop
		beq $t0, 32, case5
		nop
		beq $t0, 64, case6
		nop
		beq $t0, 128, case7
		nop
		# not (zero-hot / one-hot) : Error !
		j caseerror
		nop
	
	caseno:			# 0 previous8
		li $t4, 0
		j endcase
		nop
	case0:			# 0 1234 5678
		li $t4, 0
		addu $t3, $t1, $t2
		j endcase
		nop
	case1:
		li $t4, 0
		subu $t3, $t1, $t2
		j endcase
		nop
	case2:
		li $t4, 0
		and $t3, $t1, $t2
		j endcase
		nop
	case3:
		li $t4, 0
		or $t3, $t1, $t2
		j endcase
		nop
	case4:
		li $t4, 0
		xor $t3, $t1, $t2
		j endcase
		nop
	case5:
		li $t4, 0
		nor $t3, $t1, $t2
		j endcase
		nop
	case6:
		li $t4, 0
		sllv $t3, $t1, $t2
		j endcase
		nop
	case7:
		li $t4, 0
		srlv $t3, $t1, $t2
		j endcase
		nop
	caseerror:		# E 0000 0000
		li $t4, 0xE
		li $t3, 0
		j endcase
		nop

	endcase:
	sw $t3, 0($s5)
	sw $t4, 4($s5)
	
	j start
	nop
