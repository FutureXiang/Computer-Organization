`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    23:36:13 11/15/2018 
// Design Name:    Immediate Calculator
// Module Name:    ImmCalc 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    1*16 -> 4*32
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ImmCalc(
    input [15:0] imm16,
    output [31:0] sign_imm32,
    output [31:0] zero_imm32,
    output [31:0] lui_imm32
    );

    assign sign_imm32 = {{16{imm16[15]}}, imm16};
    assign zero_imm32 = {16'b0, imm16};
    assign lui_imm32 = {imm16, 16'b0};

endmodule
