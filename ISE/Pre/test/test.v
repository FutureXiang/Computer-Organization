`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:35 11/01/2018 
// Design Name: 
// Module Name:    test 
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
module test(
    input clk,
    output reg out
    );
	reg a,b;
	initial begin
		a = 0;
		b = 1;
		out = 0;
	end
	always@(posedge clk) begin
		out<=a==0?1:0;
	end

endmodule
