`timescale 1ns / 1ps

module Pipeline_test;

	// Inputs
	reg [31:0] A1;
	reg [31:0] A2;
	reg [31:0] B1;
	reg [31:0] B2;
	reg clk;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.A1(A1), 
		.A2(A2), 
		.B1(B1), 
		.B2(B2), 
		.clk(clk), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A1 = 0;
		A2 = 0;
		B1 = 0;
		B2 = 0;
		clk = 0;
		
		#100;
		
		A1=0;
		B1=1;
		A2=2;
		B2=3;
		#10;
		A1=3;
		B1=2;
		A2=1;
		B2=0;
		#10;
	end
	always #5 clk = ~clk;
      
endmodule

