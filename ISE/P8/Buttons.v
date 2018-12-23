`timescale 1ns / 1ps

module Buttons(
    input CLK,
    input RST,
    input [7:0] user_key,
    output reg [31:0] RD
    );

    // [31:8] reserved to 0.
    // [7:0] mapped to 8 user buttons.

    always @(posedge CLK) begin
		if(RST) begin
            RD <= 32'd0;
        end
        else
            RD <= {24'd0, user_key};
    end

endmodule
