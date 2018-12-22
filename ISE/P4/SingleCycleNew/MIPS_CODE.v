`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:28:46 11/16/2018
// Design Name:   mips
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/P4/SingleCycle/MIPS_CODE.v
// Project Name:  SingleCycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_CODE;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	/*
	wire RegWriteEn;
	wire [31:0] RegWriteData;
	wire [4:0] RegWriteAddr;
	wire MemWriteEn;
	wire [31:0] MemWriteData;
	wire [31:0] MemWriteAddr;
	*/

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)/*, 
		.RegWriteEn(RegWriteEn), 
		.RegWriteData(RegWriteData), 
		.RegWriteAddr(RegWriteAddr), 
		.MemWriteEn(MemWriteEn), 
		.MemWriteData(MemWriteData), 
		.MemWriteAddr(MemWriteAddr)*/
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		# 500;
		reset = 1;
		#10;
		reset = 0;
	end
    always #5 clk=~clk;
endmodule

