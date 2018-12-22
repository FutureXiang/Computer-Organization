`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:47:32 10/01/2018
// Design Name:   counter
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/My_first_ISM/counter_test.v
// Project Name:  My_first_ISM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_test;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [3:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.cnt(cnt)
	);

	initial begin
		// Initialize Inputs
		#0	clk = 0;		// 0ns: set clk=0, set rst_n=0
			rst_n = 0;
		#5	rst_n = 1'b1;	// 5ns: set rst_n=1
	end
	always #10 clk=~clk;	// when time = 10ns, 20ns, 30ns..., set clk=~clk
      
endmodule

