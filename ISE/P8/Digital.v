`timescale 1ns / 1ps

module Digital(
    input CLK,
    input RST,
    input WE,
    input [31:0] WD,
    input [2:0] innerADDR,
    output [31:0] RD,

    output [7:0] digital_tube2,
	output digital_tube_sel2,
	output [7:0] digital_tube1,
	output [3:0] digital_tube_sel1,
	output [7:0] digital_tube0,
	output [3:0] digital_tube_sel0
    );

    reg [7:0] tube0_12;
    reg [7:0] tube0_34;
    reg [7:0] tube1_12;
    reg [7:0] tube1_34;
    reg [7:0] tube2;

    assign RD = (innerADDR >= 3'd4) ? ({24'd0, tube2}) : ({tube1_34, tube1_12, tube0_34, tube0_12});

    always @(posedge CLK) begin
		if(RST) begin
            {tube1_34, tube1_12, tube0_34, tube0_12} <= 32'd0;
            tube2 <= 8'd0;
        end
        else begin
            if(WE) begin
                if(innerADDR >= 3'd4) begin
                    tube2 <= WD[7:0];
                end
                else begin
                    {tube1_34, tube1_12, tube0_34, tube0_12} <= WD;
                end
            end
        end
    end

    // -------------------- translate the NUMBERS in 5 regs to TUBE FORMAT
    // TODO


endmodule
