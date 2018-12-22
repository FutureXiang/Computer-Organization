`timescale 1ns / 1ps

module testMultDiv;

	// Inputs
	reg clk;
	reg [31:0] A;
	reg [31:0] B;
	reg start;
	reg [1:0] Op;

	// Outputs
	wire BUSY;
	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	MultDiv uut (
		.clk(clk),
		.A(A), 
		.B(B), 
		.start(start), 
		.Op(Op), 
		.BUSY(BUSY), 
		.HI(HI), 
		.LO(LO)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		A = 0;
		B = 0;
		start = 0;
		Op = 0;

		// Wait 100 ns for global reset to finish
		#100;

		A = 32'h7fffffff;
		B = 32'hffffffff;
		start = 1;
		Op = 2'b01;

		#10;
		start = 0;
        
		// Add stimulus here

	end

	always #5 clk = ~clk;

endmodule

