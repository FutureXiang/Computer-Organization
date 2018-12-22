`timescale 1ns / 1ps

module SaveMem(
    input [31:0] RawData,
    input [1:0] Alower,
    input [3:0] MemCode,
    output [31:0] TrueData
    );

    `define sw_  4'b0001
	`define sh_  4'b0110
	`define sb_  4'b0111

    assign TrueData = (MemCode==`sw_) ? (RawData) : ( (MemCode==`sh_) ? ({RawData[15:0], RawData[15:0]}) : {RawData[7:0], RawData[7:0], RawData[7:0], RawData[7:0]});

endmodule
