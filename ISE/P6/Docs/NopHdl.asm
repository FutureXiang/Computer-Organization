.text
addu $t1, $0, 0x00003000	#t1=3000
ori $t2, $0, 4
addu $t2, $t1, $t2			#t2=3004
mtc0 $t2, $14				#epc = 3004
sw $t2, 0($0)
lw $t1, 0($0)
mtc0 $t1, $14				#epc = 3004
eret