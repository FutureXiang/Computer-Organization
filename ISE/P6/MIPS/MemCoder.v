`timescale 1ns / 1ps
module MemCoder(
    input [31:0] IR_EXMEM,
    output reg [3:0] memCode
    );
	
	`define lw  4'b0000
	`define sw  4'b0001
	`define lh  4'b0010
	`define lb  4'b0011
	`define lhu 4'b0100
	`define lbu 4'b0101
	`define sh  4'b0110
	`define sb  4'b0111
	
	`define no  4'b1000
	
	initial begin
		memCode <= `no;
	end
	
	wire [5:0] opcode = IR_EXMEM[31:26];
	always@(*) begin
		if(opcode == 6'b100011)
			memCode <= `lw;
		else if(opcode == 6'b100001)
			memCode <= `lh;
		else if(opcode == 6'b100000)
			memCode <= `lb;
		else if(opcode == 6'b100101)
			memCode <= `lhu;
		else if(opcode == 6'b100100)
			memCode <= `lbu;
		else if(opcode == 6'b101011)
			memCode <= `sw;
		else if(opcode == 6'b101001)
			memCode <= `sh;
		else if(opcode == 6'b101000)
			memCode <= `sb;
		else
			memCode <= `no;
	end

endmodule
