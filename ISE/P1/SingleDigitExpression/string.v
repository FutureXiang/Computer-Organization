`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:48:42 10/25/2018 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	
	reg [1:0] state;
	// 0: empty; 1: F; 2: F+; 3: wrong.
	assign out = (state==1);
	initial begin
		state <= 0;
	end
	
	always@(posedge clk, clr) begin
		if(clr) begin
			state <= 0;	 // asyn!
		end
		else if(clk) begin
			if(state==0) begin
				if(in>=48 && in<=57)
					state <= 1;
				else
					state <= 3;
			end
			else if(state==1) begin
				if(in>=48 && in<=57)
					state <= 3;
				else if(in==43 || in==42)
					state <= 2;
				else
					state <= 3;
			end
			else if(state==2) begin
				if(in>=48 && in<=57)
					state <= 1;
				else if(in==43 || in==42)
					state <= 3;
				else
					state <= 3;
			end
		end
		
	end
	

endmodule
