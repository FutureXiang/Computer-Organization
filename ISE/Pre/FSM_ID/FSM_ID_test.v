`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:24:48 10/04/2018
// Design Name:   id_fsm
// Module Name:   D:/BUAA/CS/ComputerOrgan/ISE/FSM_ID/FSM_ID_test.v
// Project Name:  FSM_ID
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FSM_ID_test;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;
		#100;
		
		char = 8'b01100001;
		#10;
		char = 8'b01100010;
		#10;
		char = 8'b01100011;
		#10;
		char = 8'b01100100;
		#10;
		char = 8'b00110000;
		#10;
		char = 8'b00110001;
		#10;
		char = 8'b00110010;
		#10;
		char = 8'b00110011;
		#10;
	end
    always #5 clk = ~ clk;
endmodule

