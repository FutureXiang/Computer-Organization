`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:10:34 10/03/2018
// Design Name:   FSM_1010
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/FSM_1010/test.v
// Project Name:  FSM_1010
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM_1010
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
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	FSM_1010 uut (
		.clk(clk), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		in = 0;
		#10;
		in = 1;
		#10;
		in = 0;
		#10;
		in = 1;
		#10;
		in = 1;
		#10;
		in = 0;
		#10;
		in = 1;
		#10;
		in = 0;
	end
    always #5 clk = ~clk;
endmodule

