`timescale 1ns / 1ps
module MemCoder(
    input [5:0] opcode,
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
	
	always@(*) begin
		case (opcode)
		  6'b100011: memCode = `lw_;
		  6'b100001: memCode = `lh_;
		  6'b100000: memCode = `lb_;
		  6'b100101: memCode = `lhu_;
		  6'b100100: memCode = `lbu_;
		  6'b101011: memCode = `sw_;
		  6'b101001: memCode = `sh_;
		  6'b101000: memCode = `sb_;
		  default:   memCode = `no_;
		endcase
	end

endmodule
