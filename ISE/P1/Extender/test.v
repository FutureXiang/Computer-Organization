`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:58:04 10/25/2018
// Design Name:   ext
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/P1/Extender/test.v
// Project Name:  Extender
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ext
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
	reg [15:0] imm;
	reg [1:0] EOp;

	// Outputs
	wire [31:0] ext;

	// Instantiate the Unit Under Test (UUT)
	ext uut (
		.imm(imm), 
		.EOp(EOp), 
		.ext(ext)
	);

	initial begin
		// Initialize Inputs
		imm = 16'b1000000000001111;
		EOp = 0;
		#100;
		EOp = 1;
		#100;
		EOp = 2;
		#100;
		EOp = 3;
	end
      
endmodule

