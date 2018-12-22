.text 0x3000
ori $sp, $0, 0x2ffc
ori $1, $0, 0x0c00
mtc0 $1, $12
ori $1, $0, 0xf3e2
lui $2, 0xfef3
lui $3, 0xeed3
ori $4, $0, 0xff32
ori $5, $0, 0x0100
sw $1, 0($5)
sw $2, -4($5)
sw $3, 4($5)
sw $4, 8($5)
sw $5, -8($5)
load:
	ori $1, $0, 0x0100
	lw $2, 0($1)
	lw $2, 1($1)
	lw $2, 2($1)
	lw $2, 3($1)
	lw $2, -1($1)
	lw $2, -2($1)
	lw $2, -3($1)
	
	lh $3, 4($1)
	lh $3, -2($1)
	lh $3, -1($1)
	lh $3, 3($1)
	
	lhu $3, 4($1)
	lhu $3, -2($1)
	lhu $3, -1($1)
	lhu $3, 3($1)
	
	lb $4, 0($1)
	lb $4, 5($1)
	lb $4, 6($1)
	lb $4, -1($1)
	lb $4, -2($1)
	
	lbu $4, 0($1)
	lbu $4, 5($1)
	lbu $4, 6($1)
	lbu $4, -1($1)
	lbu $4, -2($1)
	
	ori $1, 0x7f00
	lw $3, 8($1)
	lh $3, 2($1)
	lhu $3, 4($1)
	lb $3, 1($1)
	lbu $3, 3($1)
	
	ori $1, 0x7f10
	lw $3, 8($1)
	lh $3, 2($1)
	lhu $3, 4($1)
	lb $3, 1($1)
	lbu $3, 3($1)

ori $1, $0, 0xf3e2
lui $2, 0xfef3
lui $3, 0xeed3
ori $4, $0, 0xff32
ori $5, $0, 0x0100

store:
	ori $1, $0, 0x0100
	sw $2, 0($1)
	sw $2, 1($1)
	sw $2, 2($1)
	sw $2, 3($1)
	sw $2, -1($1)
	sw $2, -2($1)
	sw $2, -3($1)
	
	sh $3, 4($1)
	sh $3, -2($1)
	sh $3, -1($1)
	sh $3, 3($1)
	
	sb $4, 0($1)
	sb $4, 5($1)
	sb $4, 6($1)
	sb $4, -1($1)
	sb $4, -2($1)
	
	ori $1, 0x7f00
	sw $4, 4($1)
	sw $3, 8($1)
	sh $3, 2($1)
	sb $3, 1($1)
	
	ori $1, 0x7f10
	sw $3, 8($1)
	sh $3, 2($1)
	sb $3, 1($1)
	
Ov:	
	lui $1, 0x7fff
	ori $1, $1, 0xffff
	ori $2, $0, 0x4425
	lui $3, 0xffff
	ori $3, $3, 0xf000
	
	add $4, $1, $2
	addu $4, $1, $2
	add $5, $1, $3
	
	sub $4, $3, $1
	subu $4, $3, $1
	sub $5, $3, $2
	
	addi $6, $1, 0xff32
	addiu $7, $1, 0xff32
	
	lui $7, 0xffff
	ori $7, $7, 0xffff
	mult $7, $1
	mflo $8
	mult $2, $1
	addi $9, $8, 0xf000
	addiu $9, $8, 0xf000
	
INT:
	# mult 在EX/MEM
	ori $1, $0, 0x0c01
	mtc0 $1, $12
	ori $1, $0, 0
	ori $2, $0, 0x7f00
	sw $1, 0($2)
	ori $1, $0, 0x0009
	ori $3, $0, 10
	sw $3, 4($2)
	sw $1, 0($2)
	ori $1, $0, 0xee22
	ori $2, $0, 0x3211
	ori $3, $0, 0x3321
	addu $4, $2, $3
	addu $5, $4, $2
	addu $6, $4, $1
	addu $7, $7, $1
	addu $8, $7, $4
	subu $9, $7, $2
	subu $10, $2, $1
	subu $11, $1, $2
	nop
	mult $1, $2
	mfhi $11
	mflo $12
	
	# mult 在MEM/WB
	ori $1, $0, 0
	ori $2, $0, 0x7f00
	sw $1, 0($2)
	ori $1, $0, 0x0009
	ori $3, $0, 10
	sw $3, 4($2)
	sw $1, 0($2)
	ori $1, $0, 0xee22
	ori $2, $0, 0x3211
	ori $3, $0, 0x3321
	addu $4, $2, $3
	addu $5, $4, $2
	addu $6, $4, $1
	addu $7, $7, $1
	addu $8, $7, $4
	subu $9, $7, $2
	subu $10, $2, $1
	nop
	mult $1, $2
	mfhi $11
	mflo $12
	
	# mthi 在EX/MEM
	ori $1, $0, 0
	ori $2, $0, 0x7f00
	sw $1, 0($2)
	ori $1, $0, 0x0009
	ori $3, $0, 10
	sw $3, 4($2)
	sw $1, 0($2)
	ori $1, $0, 0xee22
	ori $2, $0, 0x3211
	ori $3, $0, 0x3321
	addu $4, $2, $3
	addu $5, $4, $2
	addu $6, $4, $1
	addu $7, $7, $1
	addu $8, $7, $4
	subu $9, $7, $2
	subu $10, $2, $1
	nop
	nop
	mthi $1
	mfhi $11
	mflo $12
	
	# mtlo 在EX/MEM
	ori $1, $0, 0
	ori $2, $0, 0x7f00
	sw $1, 0($2)
	ori $1, $0, 0x0009
	ori $3, $0, 10
	sw $3, 4($2)
	sw $1, 0($2)
	ori $1, $0, 0xee22
	ori $2, $0, 0x3211
	ori $3, $0, 0x3321
	addu $4, $2, $3
	addu $5, $4, $2
	addu $6, $4, $1
	addu $7, $7, $1
	addu $8, $7, $4
	subu $9, $7, $2
	subu $10, $2, $1
	nop
	nop
	mtlo $1
	mfhi $11
	mflo $12
	
	# mult 在ID/EX
	ori $1, $0, 0
	ori $2, $0, 0x7f00
	sw $1, 0($2)
	ori $1, $0, 0x0009
	ori $3, $0, 10
	sw $3, 4($2)
	sw $1, 0($2)
	ori $1, $0, 0xee22
	ori $2, $0, 0x3211
	ori $3, $0, 0x3321
	addu $4, $2, $3
	addu $5, $4, $2
	addu $6, $4, $1
	addu $7, $7, $1
	addu $8, $7, $4
	subu $9, $7, $2
	nop
	nop
	nop
	nop
	mult $1, $2
	mfhi $11
	mflo $12