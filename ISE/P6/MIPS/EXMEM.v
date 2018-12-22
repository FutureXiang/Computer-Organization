module EXMEM(
    input [31:0] in_IR,
    input [4:0] in_A3,
    input [4:0] in_A2,
    input [31:0] in_V2,
    input [31:0] in_AO,
    input [31:0] in_PCp4,

    input in_RegWrite,
    input in_MemtoReg,
    input in_MemWrite,
    input in_Link,
	input in_CP0WE,

    input CLK,
	input reset,
    
    output reg [31:0] IR,
    output reg [4:0] A3,
    output reg [4:0] A2,
    output reg [31:0] V2,
    output reg [31:0] AO,
    output reg [31:0] PCp4,

    output reg RegWrite,
    output reg MemtoReg,
    output reg MemWrite,
    output reg Link,
	output reg CP0WE,
	
	input [4:0] X_in,
	output reg [4:0] X,
	input AWAYin,
	output reg AWAY
    );
	
	initial begin
		IR <= 0;
		A3 <= 0;
		A2 <= 0;
		V2 <= 0;
		AO <= 0;
		PCp4 <= 0;

		RegWrite <= 0;
		MemtoReg <= 0;
		MemWrite <= 0;
		Link <= 0;
		CP0WE <= 0;
		
		X <= 0;
		AWAY <= 0;
	end

    always @ (posedge CLK) begin
		if(reset) begin
			IR <= 0;
			A3 <= 0;
			A2 <= 0;
			V2 <= 0;
			AO <= 0;
			PCp4 <= 0;

			RegWrite <= 0;
			MemtoReg <= 0;
			MemWrite <= 0;
			Link <= 0;
			CP0WE <= 0;
			
			X <= 0;
			AWAY <= 0;
		end
		else begin
			IR <= in_IR;
			A3 <= in_A3;
			A2 <= in_A2;
			V2 <= in_V2;
			AO <= in_AO;
			PCp4 <= in_PCp4;

			RegWrite <= in_RegWrite;
			MemtoReg <= in_MemtoReg;
			MemWrite <= in_MemWrite;
			Link <= in_Link;
			CP0WE <= in_CP0WE;
			
			X <= X_in;
			AWAY <= AWAYin;
		end
    end

endmodule