`timescale 1ns / 1ps

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
