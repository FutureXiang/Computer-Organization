`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    22:02:26 11/15/2018 
// Design Name:    DataMemory
// Module Name:    DataMemory 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    1WORD * 1024
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DataMemory(
    input [31:0] Addr, // bytes lowest addr
    input [31:0] WD,
    input clk,
    input reset,
    input WE,
    output [31:0] Read,
	input [31:0] PCnow 
    );
	
	reg [31:0] DataMemory [1023:0];
    integer i;

    initial begin
        for(i=0; i<1024; i=i+1)
            DataMemory[i] <= 32'b0;
    end

	assign Read = DataMemory[Addr[11:2]];

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<1024; i=i+1)
				DataMemory[i] <= 32'b0;
        end
        else begin
		
            if(WE) begin
				$display("@%h: *%h <= %h",PCnow, Addr, WD);
                DataMemory[Addr[11:2]] <= WD;
            end

        end
    end
	

endmodule
