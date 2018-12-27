.text 0x3000
	li $s1, 0x7f00	# Timer
	li $s3, 0x7f2c	# 64 switches
	li $s4, 0x7f34	# 32 LED
	li $s5, 0x7f38	#  9 digital tubes
	
	set_CP0:
		li $t9, 0xfc01	# allowing all interrupts
		mtc0 $t9, $12
	
	
	
	detector:
		lw $t1, 4($s3)	# count NUMBER from higher  32 bit
		
		beq $t1, $s0, continue_countdown	# if didn't change
		nop
		

		# if changed:
		move $s0, $t1		# move $t1 -> $s0 (N)
		move $t5, $s0		# ========  i = N  ========
		jal restart_timer_1s
		nop
		
		
		continue_countdown:
			sw $t5, 0($s5)	# show Counter Now on Digital Tubes
		
		
			j detector
			nop
	end_detector:



	restart_timer_1s:
		# (re) start timer to countdown
		li $t7, 0
		sw $t7, 0($s1)	# control: STOP		
		li $t9, 35000000
		#li $t9, 5	# (for simulation only)
		sw $t9, 4($s1)	# preset = 35'000'000 cycles !!!!!!
		li $t7, 9
		sw $t7, 0($s1)	# control: START
		jr $ra
		nop


.ktext 0x4180
	beq $t5, 0, ending
	nop
	
	
	subu $t5, $t5, 1
	jal restart_timer_1s
	nop
	
	eret
	nop
	



	ending:
	# Timer Countdown to 0: set LED to all on !!!
	li $t3, 0xffffffff
	sw $t3, 0($s4)
	# waiting for RESET:
	loop:
		j loop
		nop
	
