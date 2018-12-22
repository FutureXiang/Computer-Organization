.text
ori $3, $0, 0x0c01
mtc0 $3, $12
lui $1, 0x7fff
ori $1, $1, 0xffff
ori $2, $0, 0xffff
jal test
add $3, $1, $2
lui $2, 0xffff
test:
lui $1, 0x7fff
ori $1, $1, 0xffff
ori $2, $0, 0xffff
jal test2
addu $3, $2, $1
lui $2, 0xffff
test2:
ori $1, $0, 0x7f08
ori $2, $0, 0xffff
sw $2, 0($1)
ori $1, $0, 1
sw $2, 0($1)
ori $1, $0, 0x7f00
ori $2, $0, 0x000b
ori $3, $0, 10
sw $3, 4($1)
sw $2, 0($1)
and $3, $1, $2
