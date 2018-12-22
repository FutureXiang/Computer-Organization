`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    19:02:48 11/15/2018 
// Design Name:    circ
// Module Name:    mips 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    R, nop, lw, sw, lui, ori, j, jal, jr, beq
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset
    );
	
	wire MemtoReg, MemWrite, Branch, RegDst, RegWrite, Jump, Link, JR;
	wire [2:0] ALUControl;
	wire [1:0] ALUSrc;
	
	wire [5:0] opcode, funct;
	
	// ------------------------------ DATAPATH
	DATAPATH DPflow (clk, reset,    MemtoReg, MemWrite, Branch, ALUControl, ALUSrc, RegDst, RegWrite, Jump, Link, JR, funct, opcode);

    // ------------------------------ Control
	Controller Ctrl (opcode, funct, MemtoReg, MemWrite, Branch, ALUControl, ALUSrc, RegDst, RegWrite, Jump, Link, JR);
	

endmodule
