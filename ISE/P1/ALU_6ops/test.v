`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:31:30 10/25/2018
// Design Name:   alu
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/P1/ALU_6ops/test.v
// Project Name:  ALU_6ops
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
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
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 7;
		B = 16;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
		ALUOp = 0;
		#100;
		ALUOp = 1;
		#100;
		ALUOp = 2;
		#100;
		ALUOp = 3;
		#100;
		ALUOp = 4;
		#100;
		ALUOp = 5;
        
		// Add stimulus here

	end
      
endmodule

