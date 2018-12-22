`timescale 1ns / 1ps

module Instructions(
    );

	`define R 		(opcode == 6'b000000)
	`define nop		(instr == 32'd0)
	`define addu	(`R & (funct == 6'b100001))
	`define subu	(`R & (funct == 6'b100011))
	`define add		(`R & (funct == 6'b100000))
	`define sub		(`R & (funct == 6'b100010))
	`define and		(`R & (funct == 6'b100100))
	
	`define ori     (opcode == 6'b001101)
	`define lui     (opcode == 6'b001111)
	`define andi	(opcode == 6'b001100)
	
	
	`define lw      (opcode == 6'b100011)
	`define sw      (opcode == 6'b101011)
	`define lh		(opcode == 6'b100001)
	`define lb		(opcode == 6'b100000)
	`define lhu		(opcode == 6'b100101)
	`define lbu		(opcode == 6'b100100)
	`define sh		(opcode == 6'b101001)
	`define sb		(opcode == 6'b101000)
	
	`define beq     (opcode == 6'b000100)
	`define j	    (opcode == 6'b000010)
	`define jal     (opcode == 6'b000011)
	`define jr      (`R & (funct == 6'b001000))

	`define eret    (instr == 32'h42000018)
	`define mfc0    ((opcode == 6'b010000) & (instr[25:21] == 5'b00000))
	`define mtc0    ((opcode == 6'b010000) & (instr[25:21] == 5'b00100))
	

endmodule
