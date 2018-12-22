`timescale 1ns / 1ps
module adder_4bit_test;
	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Clk;
	reg En;
	// Outputs
	wire [3:0] Sum;
	wire Overflow;
	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.A(A), 
		.B(B), 
		.Clk(Clk), 
		.En(En), 
		.Sum(Sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0101;
		B = 4'b1111;
		Clk = 0;
		En = 1;
		$monitor("%04dns : A=%d, B=%d, Sum=%d, Overflow=%d",$time, A, B, Sum, Overflow);
	end
	always #100
	begin
		Clk = ~Clk;
	end
endmodule

