`timescale 1ns / 1ps

module pipeline(
    input [31:0] A1,
    input [31:0] A2,
    input [31:0] B1,
    input [31:0] B2,
    input clk,
    output reg [31:0] C = 0
    );
	// Calculate A1*B1 + A2*B2
	reg [31:0] A1_B1;
	reg [31:0] A2_B2;
	
	initial begin
		A1_B1 = 0;
		A2_B2 = 0;
	end
	always@(posedge clk) begin
		A1_B1 <= A1*B1;
		A2_B2 <= A2*B2;
		
		C = A1_B1 + A2_B2;
	end

endmodule
