.text 0x3000
	li $s1, 0x7f00	# Timer
	li $s2, 0x7f10	# UART 7 Regs = {0: data, N/A, N/A, N/A, 4: LineStatus, 5: DIVReceive, 6: DIVTransmit}
	li $s3, 0x7f2c	# 64 switches
	li $s4, 0x7f34	# 32 LED
	li $s5, 0x7f38	#  9 digital tubes
	li $s6, 0x7f40	#  8 user buttons
	set_CP0:
		li $t9, 0xfc01	# allowing all interrupts
		mtc0 $t9, $12
	
	li $s7, 1	# flag = !finished.
	loop:
		lw $t0, 0($s3)	# Number from lower 32 bit
		lw $t1, 0($s6)	# trigger: user buttons
		# if(trigger=0): flag = 1
		bne $t1, $0, no_reset_flag
		nop
		reset_flag:
			li $s7, 1
		no_reset_flag:
		and $t1, $t1, $s7
		beq $t1, $0, noAction	# didn't trigger: user=0 / user=1&&flag=0
		nop
		
		# start to show & transmit
		sw $t0, 0($s5)	# 8Tubes: e.g. a b c d e f 1 2
			# UART from higher to lower: [31:28], [27,24], [23:20], [19,16], ...
			# e.g. 0e 0f 01 02, 0a 0b 0c 0d
			andi $t6, $t0, 0xf	# 2
			sb $t6, 0($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# 1
			sb $t6, 1($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# f
			sb $t6, 2($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# e
			sb $t6, 3($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# d
			sb $t6, 4($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# c
			sb $t6, 5($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# b
			sb $t6, 6($0)
			srl $t0, $t0, 4
			andi $t6, $t0, 0xf	# a
			sb $t6, 7($0)
			
			
			li $t8, 8	# offset
			detector:
				lw $t3, 16($s2)	# {ts, 4'b0, rs}
				srl $t3, $t3, 5
				and $t3, $t3, 1	# Transmit Status, 0 for busy, 1 for idle
				bne $t3, 1, detector
				nop
				# transmit idle now
				subu $t8, $t8, 1
				lbu $t2, 0($t8)	# original BYTE
				# translate to ASCII mode:
					sltiu $t6, $t2, 10
					beq $t6, 1, plus_48
					nop
					plus_55:
						addi $t2, $t2, 55
						j end_ascii
						nop
					plus_48:
						addi $t2, $t2, 48
				end_ascii:
				sw $t2, 0($s2)	# transmit a BYTE
				
				beq $t8, $0, end_transmit
				ori $s7, $0, 0	# flag = !finished = 0
				
				j detector
				nop
		end_transmit:
		noAction:
		j loop
		nop
	end:
	

.ktext 0x4180
	li $t5, 0xffffffff
	sw $t5, 0($s4)
	eret
	nop