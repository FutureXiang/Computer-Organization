.ktext 0x00004180
#.text 0x00003000
	mfc0 $s7, $13
	and $s5, $s7, 64512
	and $s6, $s7, 124
	sw $s5, 0($0)
	sw $s6, 4($0)
	beq $s5, $0, excp
	nop

	int:
	ori $s7, $0, 0xff00
	sw $s7, 8($0)
	addu $s2, $0, 0x00007F00 # Timer 1
	addu $s3, $0, 0x00007F10 # Timer 2
	ori $t0, $0, 9
	sw $0, 0($s2)  # CTRL: 0,0
	sw $0, 0($s3)
	sw $t0, 0($s2) # CTRL: 1,1
	sw $t0, 0($s3)
	eret
	ori $t0, $0, 0xff00
	
	excp:
	ori $s7, $0, 0x00FF
	sw $s7, 8($0)
	mfc0 $t7, $14
	addu $t7, $t7, 4
	mtc0 $t7, $14
	eret
	ori $t0, $0, 0x00FF
