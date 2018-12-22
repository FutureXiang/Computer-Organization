.text 0x00003000
########## beq after *
# R - beq
lui $1, 55
ori $2, $0, 1
add $2, $0, $2
add $3, $0, $0
sw $2, 0($0)
t1:
subu $1, $2, $3
beq $1, $2, beq_act1
lui $1, 55
t2:
subu $1, $2, $3
beq $2, $1, beq_act2
lui $1, 55
t3:
subu $1, $2, $3
lui $4, 3
beq $1, $2, beq_act3
lui $1, 55
t4:
subu $1, $2, $3
lui $4, 3
beq $2, $1, beq_act4
lui $1, 55

# I - beq
t5:
ori $1, $2, 0
beq $1, $2, beq_act5
lui $1, 55
t6:
ori $1, $2, 0
beq $2, $1, beq_act6
lui $1, 55
t7:
ori $1, $2, 0
lui $4, 3
beq $1, $2, beq_act7
lui $1, 55
t8:
ori $1, $2, 0
lui $4, 3
beq $2, $1, beq_act8
lui $1, 55
t9:
# load - beq
lw $1, 0($0)
beq $2, $1, beq_act9
lui $1, 55
t10:
lw $1, 0($0)
beq $1, $2, beq_act10
lui $1, 55
t11:
lw $1, 0($0)
lui $4, 3
beq $2, $1, beq_act11
lui $1, 55
t12:
lw $1, 0($0)
lui $4, 3
beq $1, $2, beq_act12
lui $1, 55

beq_act1:
	j t2
	lui $31, 2333
beq_act2:
	j t3
	lui $31, 2333
beq_act3:
	j t4
	lui $31, 2333
beq_act4:
	j t5
	lui $31, 2333
beq_act5:
	j t6
	lui $31, 2333
beq_act6:
	j t7
	lui $31, 2333
beq_act7:
	j t8
	lui $31, 2333
beq_act8:
	j t9
	lui $31, 2333
beq_act9:
	j t10
	lui $31, 2333
beq_act10:
	j t11
	lui $31, 2333
beq_act11:
	j t12
	lui $31, 2333
beq_act12:
	j end
	lui $31, 2333

end:
ori $s0, $0, 1
lw $s1, 3($s0)
lw $s1, 1($s0)
sw $31, 2($s0)

ori $t1, $0, 1				# $1 = 1
lui $t2, 0x7fff
ori $t2, $t2, 0xffff		# $2 = INT_MAX
add $t3, $t1, $t2			# $2 = 1 + INT_MAX (EXP) 

sub $t3, $0, $t1			# $3 = -1
sub $t3, $t3, $t2			# $3 = -1 - INTMAX (noEXP)
sub $t3, $t3, $t1			# $3 = -1 - INTMAX -1 (EXP)