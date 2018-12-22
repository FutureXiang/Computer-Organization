`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    22:22:56 11/15/2018 
// Design Name:    Instruction Fetch Unit
// Module Name:    Instruction_Fetcher 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    PC, InstrMemory, PCtrans
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Instruction_Fetcher(
    input [31:0] sign_imm32,
    input [25:0] addr26,
    input [31:0] ra32,
    input [1:0] PC_choice,
    input reset,
    input clk,
    output [5:0] funct,
    output [4:0] shamt,
    output [4:0] rd,
    output [4:0] rt,
    output [4:0] rs,
    output [5:0] opcode,
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

    wire [31:0] instr;
	wire [31:0] next_PC;
	NextPC calcNextPC(.oldPC(PC_counter), .newPC(next_PC), .imm32(sign_imm32), .addr26(addr26), .ra32(ra32), .PC_mux(PC_choice));
	
	assign instr = InstrMemory[PC_counter[11:2]];
    assign funct = instr[5:0];
    assign shamt = instr[10:6];
    assign rd = instr[15:11];
    assign rt = instr[20:16];
    assign rs = instr[25:21];
    assign opcode = instr[31:26];
	assign PCp4 = PC_counter+4;

    always @(posedge clk) begin
        if(reset) begin
            PC_counter <= 32'h00003000;
        end
        else begin
            PC_counter <= next_PC;
        end
    end

endmodule
