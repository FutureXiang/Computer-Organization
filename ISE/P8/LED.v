`timescale 1ns / 1ps

module LED(
    input CLK,
    input RST,
    input WE,
    input [31:0] WD,
    output reg [31:0] RD
    );

    always @(posedge CLK) begin
		if(RST) begin
            RD <= 32'd0;
        end
        else if(WE) begin
            RD <= ~WD;
        end
    end

endmodule
