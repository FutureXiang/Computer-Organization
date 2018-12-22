`timescale 1ns / 1ps

module Instruction_Fetcher(
    input [31:0] sign_imm32,
    input [25:0] addr26,
    input [31:0] ra32,
    input [1:0] PC_choice,
	
    input reset,
    input clk,
	input FREEZE,
	
    output [31:0] IR,
	output [31:0] PCp4
    );

	reg [31:0] InstrMemory [1023:0];
    reg [31:0] PC_counter;
    
	integer i;
    initial begin
        PC_counter <= 32'h00003000;
		for(i=0; i<1024; i=i+1)
            InstrMemory[i] = 32'b0;
        $readmemh("code.txt", InstrMemory);
    end

	wire [31:0] next_PC;
	NextPC calcNextPC(.oldPC(PC_counter), .newPC(next_PC), .imm32(sign_imm32), .addr26(addr26), .ra32(ra32), .PC_mux(PC_choice));
	
    assign IR = InstrMemory[PC_counter[11:2]];
    assign PCp4 = PC_counter+4;

    always @(posedge clk) begin
        if(reset) begin
            PC_counter <= 32'h00003000;
        end
        else begin
			if(!FREEZE) begin
				PC_counter <= next_PC;
			end
        end
    end

endmodule
