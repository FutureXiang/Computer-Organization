.ktext 0x00004180
#.text
mfc0 $30, $14
ori $1, $0, 0x3000
mtc0 $1, $14
ori $1, $0, 0
ori $2, $0, 0x3004
sw $30, 0($0)
lw $2, 0($0)
mtc0 $2, $14
eret
