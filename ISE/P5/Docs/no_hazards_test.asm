.text
# test all {ori,lui,addu,subu,nop, lw,sw, beq,j,jal,jr} WITHOURT HAZARD !!!!!!

	# ori, addu, subu, nop, lui
	# lw, sw
	# beq
	# j, jal, jr
	jal loadimm
	lui $s1, 233
	save:
	sw $t0, 0($s0)		# m1 = 7		65536		7			65536
	sw $t1, 4($s0)		# m2 = 55		62			55			62
	sw $t2, 8($s0)		# m3 = 62		55			62			55
	sw $t3, 12($s0)		# m4 = 65536	7			65536		7
	lui $s3, 3
	lui $s4, 4
	lw $t3, 0($s0)		# t3 = 7		65536		7			65536
	lw $t2, 4($s0)		# t2 = 55		62			55			62
	lw $t1, 8($s0)		# t1 = 62		55			62			55
	lw $t0, 12($s0)		# t0 = 65536	7			65536		7
	nop
	
	subu $t4, $t1, $t2	# t4 = 7		-7			7			-7
	lui $s5, 5
	lui $s6, 6
	beq $t4, $t3, save	# jump back		going down	jump back	going down
	lui $s1, 556
	lui $s2, 666
	
	j save				#				jump back				jump back
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
		
