`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    20:38:57 11/15/2018 
// Design Name:    Registers
// Module Name:    GRF 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    2*Read, 1*Write
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module GRF(
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input WE,
    input clk,
    input reset,
    output [31:0] RD1,
    output [31:0] RD2,
	input [31:0] PCnow
    );
	
	reg [31:0] GRF [31:0];
    integer i;

    initial begin
        for(i=0; i<32; i=i+1)
            GRF[i] <= 32'b0;
    end

	assign RD1 = GRF[A1];
	assign RD2 = GRF[A2];

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<32; i=i+1)
				GRF[i] <= 32'b0;
        end
        else begin
		
            if(WE) begin
				$display("@%h: $%d <= %h", PCnow, A3,WD);
                if(A3!=0) GRF[A3] <= WD; // Writing $0 is ignored.
            end

        end
    end

endmodule
