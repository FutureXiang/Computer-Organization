.text 0x3000
	li $s2, 0x7f10	# UART 7 Regs = {0: data, N/A, N/A, N/A, 4: LineStatus, 5: DIVReceive, 6: DIVTransmit}
	li $s5, 0x7f38	#  9 digital tubes
	li $s4, 0x7f34	# 32 LED
	
	set_CP0:
		li $t9, 0xfc01	# allowing all interrupts
		mtc0 $t9, $12
	
	loop:
		j loop
		nop
	

.ktext 0x4180
	li $t3, 0xffffffff
	sw $t3, 0($s4)
	
	lw $t0, 0($s2)	# receive data = {24'b0, rx_data}
	sw $t0, 0($s5)
	sw $t0, 0($s2)	# back to transmit
	eret
	nop
