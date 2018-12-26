`timescale 1ns / 1ps

module Switches(
    input CLK,
    input RST,
    input [7:0] dip_switch7,
	input [7:0] dip_switch6,
	input [7:0] dip_switch5,
	input [7:0] dip_switch4,
	input [7:0] dip_switch3,
	input [7:0] dip_switch2,
	input [7:0] dip_switch1,
	input [7:0] dip_switch0,
    input [2:0] innerADDR,      // 0~7 for switch group 0~7
    output [31:0] RD
    );

    reg [63:0] switch64;
    assign RD = (innerADDR >= 3'd4) ? (switch64[63:32]) : (switch64[31:0]) ;
    always @(posedge CLK) begin
		if(RST) begin
            switch64 <= 64'd0;
        end
        else begin
            switch64 <= ~({dip_switch7, dip_switch6, dip_switch5, dip_switch4, dip_switch3, dip_switch2, dip_switch1, dip_switch0});
        end
    end


endmodule
