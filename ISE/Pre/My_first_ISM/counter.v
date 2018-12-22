`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:56 09/27/2018 
// Design Name: 
// Module Name:    counter 
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
module counter(input clk, input rst_n, output[3:0] cnt);

	reg[3:0]count;
	assign cnt=count;
	always@(posedge clk, negedge rst_n)
	begin
		if (!rst_n)	//rst_n = 0: reset
			count<=0;
		else		//rst_n = 1: keep going
			count<=count+1'b1;
	end

endmodule
