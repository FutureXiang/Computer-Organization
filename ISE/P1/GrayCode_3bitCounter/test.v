`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:08:05 10/25/2018
// Design Name:   gray
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/P1/GrayCode_3bitCounter/test.v
// Project Name:  GrayCode_3bitCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gray
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
	reg Clk;
	reg Reset;
	reg En;

	// Outputs
	wire [2:0] Output;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	gray uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Output(Output), 
		.Overflow(Overflow)
	);

	initial begin
		Clk = 0;
		Reset = 0;
		En = 0;
		
		#100;
		En = 1;
		
		#20;
		Reset = 1;
		#10;
		Reset = 0;
		#100;
		Reset = 1;
	end
	
	always #5 Clk = ~Clk;
	
endmodule

