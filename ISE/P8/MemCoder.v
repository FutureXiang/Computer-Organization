`timescale 1ns / 1ps
module MemCoder(
    input [31:0] IR_EXMEM,
    output reg [3:0] memCode
    );
	
	`define lw_  4'b0000
	`define sw_  4'b0001
	`define lh_  4'b0010
	`define lb_  4'b0011
	`define lhu_ 4'b0100
	`define lbu_ 4'b0101
	`define sh_  4'b0110
	`define sb_  4'b0111
	
	`define no_  4'b1000
	
	/*initial begin
		memCode <= `no;
	end*/
	
	wire [5:0] opcode = IR_EXMEM[31:26];
	always@(*) begin
		if(opcode == 6'b100011)
			memCode <= `lw_;
		else if(opcode == 6'b100001)
			memCode <= `lh_;
		else if(opcode == 6'b100000)
			memCode <= `lb_;
		else if(opcode == 6'b100101)
			memCode <= `lhu_;
		else if(opcode == 6'b100100)
			memCode <= `lbu_;
		else if(opcode == 6'b101011)
			memCode <= `sw_;
		else if(opcode == 6'b101001)
			memCode <= `sh_;
		else if(opcode == 6'b101000)
			memCode <= `sb_;
		else
			memCode <= `no_;
	end

endmodule
