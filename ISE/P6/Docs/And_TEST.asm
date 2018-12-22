.text
# and, andi TEST
ori $t0, $0, 10		# 1010
ori $t1, $0, 15		# 1111
and $t0, $t0, $t1	# 1010
ori $t0, $t0, 4		# 1110
andi $t0,$t0, 6		# 0110
sw $t0, 0($0)
lw $t1, 0($0)
andi $t1, $t0, 2	# 0010

# Interrupt TEST
ori $t0, $0, 0x0000FC01 # Allow All Interrupt
mtc0 $t0, $12

addu $s0, $0, 0x00007F00 # Timer 1
addu $s1, $0, 0x00007F10 # Timer 2
ori $t0, $0, 7
sw $t0, 4($s0)	# init = 7
sw $t0, 4($s1)  # init = 7
ori $t0, $0, 9
sw $t0, 0($s0)	# start mode 0
sw $t0, 0($s1)  # start mode 0

# Long Operations Without Expection
jal loadimm
	lui $s1, 233
	save:
	sw $t0, 0($s0)		# m1 = 7		65536
	sw $t1, 4($s0)		# m2 = 55		62
	sw $t2, 8($s0)		# m3 = 62		55
	sw $t3, 12($s0)		# m4 = 65536	7
	lui $s3, 3
	lui $s4, 4
	lw $t3, 0($s0)		# t3 = 7		65536
	lw $t2, 4($s0)		# t2 = 55		62
	lw $t1, 8($s0)		# t1 = 62		55
	lw $t0, 12($s0)		# t0 = 65536	7
	nop
	
	subu $t4, $t1, $t2	# t4 = 7		-7
	lui $s5, 5
	lui $s6, 6
	beq $t4, $t3, save	# back			down
	lui $s1, 556
	lui $s2, 666
	
	j next_test
	lui $s1, 445
	
	loadimm:
		ori $t0, $0, 7		# t0 = 7
		lui $t3, 1			# t3 = 65536
		ori $s0, $0, 4		# s0 = 4
		ori $t1, $t0, 50	# t1 = t0 or 50 = 55
		lui $s1, 0
		nop
		addu $t2, $t0, $t1	# t2 = t0 or t1 = 62
		lui $s2, 2
		nop
		subu $t4, $t3, $t2	# t4 = t3 or t3 = 65474
		
		jr $ra
		lui $s1, 334

next_test:

# Operation TEST
#lw $s1, 1($s0)				# EXP 4
#sw $31, 2($s0)				# EXP 5
or $1, $0, $0				# EXP 10
lbu $t0, 200($0)			# EXP 10


# Memory TEST
ori $s0, $0, 1
lw $s1, 3($s0)				# noEXP
lw $s1, 1($s0)				# EXP 4
sw $31, 2($s0)				# EXP 5
sw $30, 7($s0)				# noEXP


# Overflow TEST
ori $t1, $0, 1				# $1 = 1
lui $t2, 0x7fff
ori $t2, $t2, 0xffff		# $2 = INT_MAX
add $t3, $t1, $t2			# $2 = 1 + INT_MAX (EXP 12) 

sub $t3, $0, $t1			# $3 = -1
sub $t3, $t3, $t2			# $3 = -1 - INTMAX (noEXP)
sub $t3, $t3, $t1			# $3 = -1 - INTMAX -1 (EXP 12)
