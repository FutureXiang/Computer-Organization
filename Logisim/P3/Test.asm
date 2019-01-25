.data
	
.text
	ori $t0, $0, 7		# t0 = 7
	ori $t1, $t0, 50	# t1 = 55
	addu $t2, $t0, $t1	# t2 = 62
	nop
	
	lui $t3, 1			# t3 = 65536
	subu $t4, $t3, $t2	# t4 = 65474
	nop
	
	ori $s0, $0, 4		# s0 = 4
	
	save:
	sw $t0, 0($s0)		# m1 = 7		65536		7			65536
	sw $t1, 4($s0)		# m2 = 55		62			55			62
	sw $t2, 8($s0)		# m3 = 62		55			62			55
	sw $t3, 12($s0)		# m4 = 65536	7			65536		7
	
	lw $t3, 0($s0)		# t3 = 7		65536		7			65536
	lw $t2, 4($s0)		# t2 = 55		62			55			62
	lw $t1, 8($s0)		# t1 = 62		55			62			55
	lw $t0, 12($s0)		# t0 = 65536	7			65536		7
	nop
	
	subu $t4, $t1, $t2	# t4 = 7		-7			7			-7
	beq $t4, $t3, save	# jump back		going down	jump back	going down
	
	j save				#				jump back				jump back
	
