`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:26:10 11/18/2018 
// Design Name: 
// Module Name:    DATAPATH 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DATAPATH(
	input clk,
    input reset,
	input MemtoReg,
	input MemWrite,
	input Branch,
	input [2:0] ALUControl,
	input [1:0] ALUSrc,
	input RegDst,
	input RegWrite,
	input Jump,
	input Link,
	input JR,
	output [5:0] funct,
	output [5:0] opcode
    );
	
	
	// ------------------------------ Instrs, PCs and Imms
	wire [4:0] shamt, rd, rt, rs;					// Instrs
	wire [31:0] PCp4, PCnow;						// PCs
	wire [15:0] imm16;								// IMMs
	wire [31:0] sign_imm32, zero_imm32, lui_imm32;
	wire [25:0] addr26;
	// ------------------------------ Registers
    wire [31:0] RD1, RD2;
	wire [4:0]  regA3_mux;
	wire [31:0] regWD_mux;
	// ------------------------------ ALU
    wire [31:0] ALU_B_mux, ALUResult;
	wire Zero;
	// ------------------------------ Data Memory
    wire [31:0] DMread;
	
	assign addr26 = {rs, rt, rd, shamt, funct};
    assign imm16  = {rd, shamt, funct};
	ImmCalc Imms (imm16, sign_imm32, zero_imm32, lui_imm32);
    
	assign regA3_mux  = ~Link ? (~RegDst ? rt : rd )             : 5'd31;
	assign regWD_mux  = ~Link ? (~MemtoReg ? ALUResult : DMread) : PCp4;
	assign ALU_B_mux  = ALUSrc[1] ? (ALUSrc[0] ? lui_imm32 : zero_imm32) : (ALUSrc[0] ? sign_imm32 : RD2);
	
	wire [1:0] PC_choice = Jump ? 2'd2 : (JR ? (2'd3) : (Branch ? (Zero) : (2'd0) ) );
    
	Instruction_Fetcher IFU (sign_imm32, addr26, ALUResult, PC_choice, reset, clk, funct, shamt, rd, rt, rs, opcode, PCp4);
	GRF Regs (.A1(rs), .A2(rt), .A3(regA3_mux), .WD(regWD_mux), .clk(clk), .reset(reset), .WE(RegWrite), .RD1(RD1), .RD2(RD2), .PCnow(PCp4 - 4));
    ALU Alu (.A(RD1), .B(ALU_B_mux), .ALUControl(ALUControl), .Zero(Zero), .Result(ALUResult));
    DataMemory Mems (.Addr(ALUResult), .WD(RD2), .clk(clk), .reset(reset), .WE(MemWrite), .Read(DMread), .PCnow(PCp4 - 4));


endmodule
