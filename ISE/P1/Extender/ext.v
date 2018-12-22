`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:58 10/25/2018 
// Design Name: 
// Module Name:    ext 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output reg [31:0] ext
    );
	
	always @(imm, EOp) begin
		if(EOp==2'b00) begin
			ext = {{16{imm[15]}},imm}; // 16 times imm[15] then concat to imm
		end
		if(EOp==2'b01) begin
			ext = {{16{1'b0}},imm}; // 16 times 0 then concat to imm
		end
		if(EOp==2'b10) begin
			ext = {imm, {16{1'b0}}}; // imm concat to 16 times 0
		end
		if(EOp==2'b11) begin
			ext = {{16{imm[15]}},imm}<<2; // signed extend then <<2
		end
	end

endmodule
