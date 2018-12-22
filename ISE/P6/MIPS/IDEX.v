module IDEX(
    input [31:0] in_IR,
    input [4:0] in_A3,
    input [4:0] in_A2,
    input [4:0] in_A1,
    input [31:0] in_V2,
    input [31:0] in_V1,
    input [31:0] in_E32_sign,
    input [31:0] in_E32_zero,
    input [31:0] in_E32_lui,
    input [31:0] in_PCp4,
	
    input in_RegWrite,
    input in_MemtoReg,
    input in_MemWrite,
    input [2:0] in_ALUControl,
    input [1:0] in_ALUSrc,
    input in_Link,
	input in_OverflowD,
	input in_CP0WE,

    input NOP_CLR,
    input CLK,
	input reset,

    output reg [31:0] IR,
    output reg [4:0] A3,
    output reg [4:0] A2,
    output reg [4:0] A1,
    output reg [31:0] V2,
    output reg [31:0] V1,
    output reg [31:0] E32_sign,
    output reg [31:0] E32_zero,
    output reg [31:0] E32_lui,
    output reg [31:0] PCp4,

    output reg RegWrite,
    output reg MemtoReg,
    output reg MemWrite,
    output reg [2:0] ALUControl,
    output reg [1:0] ALUSrc,
    output reg Link,
	output reg OverflowD,
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
		A1 <= 0;
		V2 <= 0;
		V1 <= 0;
		E32_sign <= 0;
		E32_zero <= 0;
		E32_lui  <= 0;
		PCp4 <= 0;

		RegWrite <= 0;
		MemtoReg <= 0;
		MemWrite <= 0;
		ALUSrc <= 0;
		ALUControl <= 0;
		Link <= 0;
		OverflowD <= 0;
		CP0WE <= 0;
		
		X <= 0;
        AWAY <= 0;
	end

    always @ (posedge CLK) begin
        if(NOP_CLR | reset) begin
		    IR <= 0;
            A3 <= 0;
            A2 <= 0;
            A1 <= 0;
            V2 <= 0;
            V1 <= 0;
            E32_sign <= 0;
            E32_zero <= 0;
            E32_lui  <= 0;
            PCp4 <= 0;

            RegWrite <= 0;
            MemtoReg <= 0;
            MemWrite <= 0;
            ALUSrc <= 0;
            ALUControl <= 0;
            Link <= 0;
			OverflowD <= 0;
			CP0WE <= 0;
			
			X <= 0;
            AWAY <= 0;
        end
        else begin
            IR <= in_IR;
            A3 <= in_A3;
            A2 <= in_A2;
            A1 <= in_A1;
            V2 <= in_V2;
            V1 <= in_V1;
            E32_sign <= in_E32_sign;
            E32_zero <= in_E32_zero;
            E32_lui  <= in_E32_lui;
            PCp4 <= in_PCp4;

            RegWrite <= in_RegWrite;
            MemtoReg <= in_MemtoReg;
            MemWrite <= in_MemWrite;
            ALUSrc <= in_ALUSrc;
            ALUControl <= in_ALUControl;
            Link <= in_Link;
			OverflowD <= in_OverflowD;
			CP0WE <= in_CP0WE;
			
			X <= X_in;
            AWAY <= AWAYin;
        end
    end

endmodule