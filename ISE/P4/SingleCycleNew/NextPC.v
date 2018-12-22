`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    19:17:58 11/15/2018
// Design Name:    PC transfer calculator
// Module Name:    NextPC
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    oldPC -> newPC, 4 choices
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module NextPC(
    input [31:0] oldPC,
    output reg [31:0] newPC,
    input [31:0] imm32,
    input [25:0] addr26,
    input [31:0] ra32,
    input [1:0] PC_mux
    );

	wire [31:0] PCplus4;
	assign PCplus4 = oldPC + 4;

    always@(*) begin
        if(PC_mux==0)
            newPC = PCplus4;
        else if(PC_mux==1)
            newPC = PCplus4+imm32*4;
        else if(PC_mux==2)
            newPC = {{PCplus4[31:28]}, addr26, 2'b00};
        else if(PC_mux==3)
            newPC = ra32;
    end


endmodule
