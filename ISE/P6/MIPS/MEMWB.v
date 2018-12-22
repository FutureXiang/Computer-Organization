module MEMWB(
    input [31:0] in_IR,
    input [4:0] in_A3,
    input [31:0] in_AO,
    input [31:0] in_DR,
    input [31:0] in_PCp4,
    
    input in_RegWrite,
    input in_MemtoReg,
    input in_Link,
    
    input CLK,
	input reset,
    
    output reg [31:0] IR,
    output reg [4:0] A3,
    output reg [31:0] AO,
    output reg [31:0] DR,
    output reg [31:0] PCp4,
    
    output reg RegWrite,
    output reg MemtoReg,
    output reg Link,
	
	input AWAYin,
	output reg AWAY
    );
	
	initial begin
		IR <= 0;
		A3 <= 0;
		AO <= 0;
		DR <= 0;
		PCp4 <= 0;
		
		RegWrite <= 0;
        MemtoReg <= 0;
        Link <= 0;
		AWAY <= 0;
	end

    always @ (posedge CLK) begin
		if(reset) begin
			IR <= 0;
			A3 <= 0;
			AO <= 0;
			DR <= 0;
			PCp4 <= 0;
			
			RegWrite <= 0;
			MemtoReg <= 0;
			Link <= 0;
			AWAY <= 0;
		end
		else begin
			IR <= in_IR;
			A3 <= in_A3;
			AO <= in_AO;
			DR <= in_DR;
			PCp4 <= in_PCp4;

			RegWrite <= in_RegWrite;
			MemtoReg <= in_MemtoReg;
			Link <= in_Link;
			AWAY <= AWAYin;
		end
    end

endmodule