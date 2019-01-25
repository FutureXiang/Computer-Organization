.data
 	fibs: .space 48           # "array" of 12 words to contain fib values, 12 WORD = 48 Bytes = IntArray[12]
 	size: .word  12           # size of "array"
	str1: .ascii "1234"	# NO '\0'
	str2: .ascii "5678"	# NO '\0'
	str3: .asciiz "9\n"	# HAVE '\0'

.text
	test_input_integer:
	li $v0,5
	syscall
	move $t0, $v0

	test_print_string:
	la $a0, str1 # print(str1+str2+str3), 'cause ascii doesn't add "\0" at the end!
	li $v0, 4
	syscall
	la $a0, str3 # print(str3),           'cause asciiz does   add "\0" at the end!
	li $v0, 4
	syscall

	fibonnaci_number_calculate:
	li $t0,2	# i. already calced 1st and 2nd.
	li $t1,1	# f(i-1).
	li $t2,1	# f(i)
	la $t5, fibs # save path
	la $t6, size
	lw $t6, 0($t6) # max i+1 number.
	sw $t1,0($t5)
	sw $t2,4($t5)
	addi $t5,$t5,8
	
	for_begin:
	slt $t3,$t0,$t6
	beq $0,$t3,for_end
	add $t4,$t2,$t1
	sw $t4,0($t5)
	addi $t5,$t5,4
	addi $t0,$t0,1
	move $t1, $t2
	move $t2, $t4
	j for_begin
	for_end:
	
	li $v0, 10
	syscall
