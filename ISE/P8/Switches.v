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
    output reg [31:0] RD
    );

    always @(posedge CLK) begin
		if(RST) begin
            RD <= 32'd0;
        end
        else begin
            RD <= (innerADDR >= 3'd4) ? 
            ({dip_switch7, dip_switch6, dip_switch5, dip_switch4}) : 
            ({dip_switch3, dip_switch2, dip_switch1, dip_switch0}) ;
        end
    end


endmodule
