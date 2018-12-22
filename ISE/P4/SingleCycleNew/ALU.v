`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    19:08:00 11/15/2018 
// Design Name:    ALU
// Module Name:    ALU 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    +, -, &, |, <
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUControl,
    output reg [31:0] Result,
    output Zero
    );
    assign Zero = (Result==0);
	always @(A, B, ALUControl) begin
        case (ALUControl)
        3'b000 : begin
                Result = A & B;
            end
        3'b001 : begin
                Result = A | B;
            end
        3'b010 : begin
                Result = A + B;
            end
        3'b110 : begin
                Result = A - B;
            end
        3'b111 : begin
                Result = (A < B);
            end
        endcase
    end

endmodule
