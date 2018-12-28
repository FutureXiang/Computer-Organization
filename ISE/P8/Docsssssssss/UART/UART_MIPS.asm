.text 0x3000
	li $s2, 0x7f10	# UART 7 Regs = {0: data, N/A, N/A, N/A, 4: LineStatus, 5: DIVReceive, 6: DIVTransmit}
	li $s5, 0x7f38	#  9 digital tubes
	li $s4, 0x7f34	# 32 LED

	initial:
		li $t9, 0xfc01	# allowing all interrupts
		mtc0 $t9, $12
		li $s0, 0		# Head of the Q
		li $s7, 0		# Tail of the Q
	
	
	loop:
		lw $t1, 16($s2)	# {ts, 4'b0, rs}
		srl $t1, $t1, 5
		and $t1, $t1, 1	# Transmit Status, 0 for busy, 1 for idle
		
		bne $t1, 1, still_busy
		nop
		beq $s0, $s7, empty_queue
		nop
		
		# if !Q.empty && rt==IDLE: transmit Q.pop_front()
		jal queue_pop_t8
		nop
		sw $t8, 0($s2)	# TRANS => show on Digital Tubes
		sw $t8, 0($s5)
		
		empty_queue:
		still_busy:
			j loop
			nop
	
	queue_pop_t8:
		lw $t8, 0($s0)
		addu $s0, $s0, 4
		
	jr $ra
	nop

.ktext 0x4180
	li $t3, 0xffffffff	# INTERRUPT => LED on.
	sw $t3, 0($s4)
	
	lw $t0, 0($s2)	# receive data = {24'b0, rx_data}
	sw $t0, 0($s7)	# save data to queue
	addu $s7, $s7, 4
	
	eret
	nop
