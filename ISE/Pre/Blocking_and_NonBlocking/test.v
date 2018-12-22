`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:46:40 10/03/2018
// Design Name:   Blocking_and_NonBlocking
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/Blocking_and_NonBlocking/test.v
// Project Name:  Blocking_and_NonBlocking
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Blocking_and_NonBlocking
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

	// Instantiate the Unit Under Test (UUT)
	Blocking_and_NonBlocking uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #5 clk <= ~clk;
      
endmodule

