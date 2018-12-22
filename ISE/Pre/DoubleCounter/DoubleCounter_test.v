`timescale 1ns / 1ps
module DoubleCounter_test;

	// Inputs
	reg Clk;
	reg En;
	reg Reset;
	reg Slt;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.En(En), 
		.Reset(Reset), 
		.Slt(Slt), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		
		Slt = 0;
		En = 0;
		Reset = 1;
		#10;
		Slt = 1;
		En = 1;
		Reset = 0;
	end
	always #5
		Clk = ~Clk;
endmodule

