`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:00:59 10/25/2018
// Design Name:   string
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/P1/SingleDigitExpression/test.v
// Project Name:  SingleDigitExpression
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 8'd48;
		#10;
		in = 8'd42;
		#10;
		in = 8'd49;
		#10;
		in = 8'd43;
		#10;
		in = 8'd50;
		#30;
		clr = 1;
		#10;
		clr = 0;
		in = 8'd48;
		#10;
		in = 8'd42;
		#10;
		in = 8'd49;
		#10;
		in = 8'd43;
	end
    always #5 clk = ~clk;
endmodule

