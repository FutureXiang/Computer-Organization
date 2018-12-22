.text 0x4180
enter:
	addi $30, $0, 120
	sub $sp, $sp, $30
	sw $1, 0($sp)
	sw $2, 4($sp)
	sw $3, 8($sp)
	sw $4, 12($sp)
	sw $5, 16($sp)
	sw $6, 20($sp)
	sw $7, 24($sp)
	sw $8, 28($sp)
	sw $9, 32($sp)
	sw $10, 36($sp)
	sw $11, 40($sp)
	sw $12, 44($sp)
	sw $13, 48($sp)
	sw $14, 52($sp)
	sw $15, 56($sp)
	sw $16, 60($sp)
	sw $17, 64($sp)
	sw $18, 68($sp)
	sw $19, 72($sp)
	sw $20, 76($sp)
	sw $21, 80($sp)
	sw $22, 84($sp)
	sw $23, 88($sp)
	sw $24, 92($sp)
	sw $25, 96($sp)
	sw $26, 100($sp)
	sw $27, 104($sp)
	sw $28, 108($sp)
	sw $30, 112($sp)
	sw $31, 116($sp)
	
	addi $30, $0, 8
	sub $sp, $sp, $30
	
	j find
	nop
error:
	lui $1, 0xffff
	ori $1, $0, 0xffff
	mtc0 $1, $12
	mtc0 $1, $13
	mtc0 $1, $15
	j error
	nop
aderror:
	lui $1, 0xeeee
	ori $1, $0, 0xeeee
	mtc0 $1, $12
	mtc0 $1, $13
	mtc0 $1, $15
	j aderror
	nop
find:
	mfc0, $k0, $13
	ori $1, $0, 0
	ori $2, $0, 0x0010
	ori $3, $0, 0x0014
	ori $4, $0, 0x0028
	ori $5, $0, 0x0030
	andi $k1, $k0, 0x007c
	beq $k1, $1, INT_find
	nop
	beq, $k1, $2, AdEL_handle
	nop
	beq $k1, $3, AdES_handle
	nop
	beq $k1, $4, RI_handle
	nop
	beq $k1, $5, Ov_handle
	nop
	j error
	nop
INT_find:
	mfc0, $k0, $13
	andi $k1, $k0, 0xfc00
	ori $1, $0, 0x0400
	ori $2, $0, 0x0800
	beq $k1, $1, T1_handle
	nop
	beq $k1, $2, T2_handle
	nop
	j error
	nop
T1_handle:
	ori $1, $0, 0x0000
	ori $2, $0, 0x7f00
	sw $1, 0($2)
	ori $3, $0, 10
	sw $3, 4($2)
	ori $1, $0, 0x0000
	
	sw $1, 0($sp)
	sw $2, 4($sp)
	mfhi $10
	mflo $11
	j return
	nop
	j error
	nop
T2_handle:
	ori $1, $0, 0x0000
	ori $2, $0, 0x7f10
	sw $1, 0($2)
	ori $3, $0, 10
	sw $3, 4($2)
	ori $1, $0, 0x0000
	
	sw $1, 0($sp)
	sw $2, 4($sp)
	mfhi $10
	mflo $11
	j return
	nop
	j error
	nop
AdEL_handle:
	mfc0 $1, $14
	ori $2, $0, 0x3000
	slt $3, $1, $2
	ori $4, $0, 1
	beq $3, $4, aderror
	nop
	ori $2, $0, 0x4ffc
	slt $3, $2, $1
	beq $3, $4, aderror
	nop
	mfc0 $2, $13
	lui $3, 0x8000
	lui $4, 0x8000
	and $6, $2, $3
	beq $4, $6, AdEL_bd_handle
	nop
		addi $1, $1, 4
		mtc0 $1, $14
		j return
		nop
	AdEL_bd_handle:
		addi $1, $1, 8
		mtc0 $1, $14
		j return
		nop
	j error
	nop
AdES_handle:
	mfc0 $1, $14
	mfc0 $2, $13
	lui $3, 0x8000
	lui $4, 0x8000
	and $6, $2, $3
	beq $4, $6, AdES_bd_handle
	nop
		addi $1, $1, 4
		mtc0 $1, $14
		j return
		nop
	AdES_bd_handle:
		addi $1, $1, 8
		mtc0 $1, $14
		j return
		nop
	j error
	nop
RI_handle:
	mfc0 $1, $14
	mfc0 $2, $13
	lui $3, 0x8000
	lui $4, 0x8000
	and $6, $2, $3
	beq $4, $6, RI_bd_handle
	nop
		addi $1, $1, 4
		mtc0 $1, $14
		j return
		nop
	RI_bd_handle:
		addi $1, $1, 8
		mtc0 $1, $14
		j return
		nop
	j error
	nop
Ov_handle:
	mfc0 $1, $14
	mfc0 $2, $13
	lui $3, 0x8000
	lui $4, 0x8000
	and $6, $2, $3
	beq $4, $6, Ov_bd_handle
	nop
		addi $1, $1, 4
		mtc0 $1, $14
		j return
		nop
	Ov_bd_handle:
		addi $1, $1, 8
		mtc0 $1, $14
		j return
		nop
	j error
	nop
return:
	addi $sp, $sp, 8
	lw $1, 0($sp)
	lw $2, 4($sp)
	lw $3, 8($sp)
	lw $4, 12($sp)
	lw $5, 16($sp)
	lw $6, 20($sp)
	lw $7, 24($sp)
	lw $8, 28($sp)
	lw $9, 32($sp)
	lw $10, 36($sp)
	lw $11, 40($sp)
	lw $12, 44($sp)
	lw $13, 48($sp)
	lw $14, 52($sp)
	lw $15, 56($sp)
	lw $16, 60($sp)
	lw $17, 64($sp)
	lw $18, 68($sp)
	lw $19, 72($sp)
	lw $20, 76($sp)
	lw $21, 80($sp)
	lw $22, 84($sp)
	lw $23, 88($sp)
	lw $24, 92($sp)
	lw $25, 96($sp)
	lw $26, 100($sp)
	lw $27, 104($sp)
	lw $28, 108($sp)
	lw $30, 112($sp)
	lw $31, 116($sp)
	
	lw $k0, -8($sp)
	lw $k1, -4($sp)
	addi $sp, $sp, 120
	sw $k0, 0($k1)
	eret
	
	
	