.data
	visit: .space 8  # max 7 0/1 nums
	array: .space 28 # max 7 [1,N] nums
	space: .asciiz " "
	end:   .asciiz "\n"
.text

j main


print_array:
	la $t9, array
	li $t8, 0
	for_print_begin:
		beq $t8, $s0, for_print_end
		
		lw $t7, 0($t9)
		addi $t9, $t9, 4
		move $a0, $t7
		li $v0, 1
		syscall
		la $a0, space
		li $v0, 4
		syscall
		
		addi $t8, $t8, 1
		j for_print_begin
	for_print_end:
	la $a0, end
	li $v0, 4
	syscall
	jr $ra
	

dfs:
	move $t0, $a0 # $t0 = (index)
	bne $t0, $s0, no_print
	# if(index==N) then: print array and return
		subi $sp, $sp, 4
		sw $ra, 0($sp)
		jal print_array
		lw $ra, 0($sp)
		addi $sp, $sp, 4
		jr $ra
	
	# continue to place a number
	no_print:
	# for(i=0;i<N;++i). $t1 => i.
	li $t1, 0
	for_place_begin:
		beq $t1, $s0, for_place_end
		# if(visit[i]==0)
		lb $t2, 0($t1) # $t2 => visit[i]
		bne $t2, 0, else
			la $t2, array
			mul $t3, $t0, 4
			add $t2, $t2, $t3
			addi $t3, $t1, 1
			sw $t3, 0($t2) # array[index] = i+1
			li $t2, 1      # visit[i] = 1
			sb $t2, 0($t1)
			# regs need to be saved: t1, t0, ra
			subi $sp, $sp, 12
			sw $t0, 8($sp)
			sw $t1, 4($sp)
			sw $ra, 0($sp)
			
			addi $a0, $t0, 1
			jal dfs
			
			lw $ra, 0($sp)
			lw $t1, 4($sp)
			lw $t0, 8($sp)
			addi $sp, $sp, 12
			
			li $t2, 0      # visit[i] = 0
			sb $t2, 0($t1)		
		
		else:
		addi $t1, $t1, 1
		j for_place_begin
	for_place_end:
	jr $ra
	
main:
	# $s0 = N
	li $v0,5
	syscall
	move $s0, $v0
	
	# dfs(0)
	li $a0, 0
	jal dfs
	
	END_OF_MAIN:
	li $v0,10
	syscall