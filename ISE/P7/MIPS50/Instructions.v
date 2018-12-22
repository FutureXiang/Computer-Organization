`timescale 1ns / 1ps

module Instructions(
    );

	`define R 		(opcode == 6'b000000)
	`define nop		(instr == 32'd0)

	// Memory Operation
	`define lb		(opcode == 6'b100000)
	`define lbu		(opcode == 6'b100100)
	`define lh		(opcode == 6'b100001)
	`define lhu		(opcode == 6'b100101)
	`define lw      (opcode == 6'b100011)
	`define sb		(opcode == 6'b101000)
	`define sh		(opcode == 6'b101001)
	`define sw      (opcode == 6'b101011)


	// Calculation: R type
	`define add		(`R & (funct == 6'b100000))
	`define addu	(`R & (funct == 6'b100001))
	`define sub		(`R & (funct == 6'b100010))
	`define subu	(`R & (funct == 6'b100011))

	`define mult	(`R & (funct == 6'b011000))
	`define multu	(`R & (funct == 6'b011001))
	`define div		(`R & (funct == 6'b011010))
	`define divu	(`R & (funct == 6'b011011))

	`define sll		(`R & (funct == 6'b000000))
	`define srl		(`R & (funct == 6'b000010))
	`define sra		(`R & (funct == 6'b000011))
	`define sllv	(`R & (funct == 6'b000100))
	`define srlv	(`R & (funct == 6'b000110))
	`define srav	(`R & (funct == 6'b000111))

	`define and		(`R & (funct == 6'b100100))
	`define or		(`R & (funct == 6'b100101))
	`define xor		(`R & (funct == 6'b100110))
	`define nor		(`R & (funct == 6'b100111))

	`define slt		(`R & (funct == 6'b101010))
	`define sltu	(`R & (funct == 6'b101011))



	// Calculation: I type
	`define addi	(opcode == 6'b001000)
	`define addiu	(opcode == 6'b001001)
	
	`define andi	(opcode == 6'b001100)
	`define ori		(opcode == 6'b001101)
	`define xori	(opcode == 6'b001110)
	`define lui		(opcode == 6'b001111)
	
	`define slti	(opcode == 6'b001010)
	`define sltiu	(opcode == 6'b001011)
	
	
	// Branch	
	`define beq     (opcode == 6'b000100)
	`define bne     (opcode == 6'b000101)
	`define blez	(opcode == 6'b000110)
	`define bgtz	(opcode == 6'b000111)
	`define bltz	(opcode == 6'b000001 & (instr[20:16] == 5'b00000))
	`define bgez	(opcode == 6'b000001 & (instr[20:16] == 5'b00001))


	// Jump
	`define j	    (opcode == 6'b000010)
	`define jal     (opcode == 6'b000011)
	`define jalr	(`R & (funct == 6'b001001))
	`define jr      (`R & (funct == 6'b001000))


	// HI / LO
	`define mfhi    (`R & (funct == 6'b010000))
	`define mflo    (`R & (funct == 6'b010010))
	`define mthi    (`R & (funct == 6'b010001))
	`define mtlo    (`R & (funct == 5'b010011))


	// CP0
	`define eret    (instr == 32'h42000018)
	`define mfc0    ((opcode == 6'b010000) & (instr[25:21] == 5'b00000))
	`define mtc0    ((opcode == 6'b010000) & (instr[25:21] == 5'b00100))
	

endmodule
