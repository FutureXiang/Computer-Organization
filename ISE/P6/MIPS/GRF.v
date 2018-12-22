`timescale 1ns / 1ps

module GRF(
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
	
    input clk,
    input reset,
    input WE,
    
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

	assign RD1 = (A3==A1 & WE==1 & A3!=0)? WD : GRF[A1];
	assign RD2 = (A3==A2 & WE==1 & A3!=0)? WD : GRF[A2];

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<32; i=i+1)
				GRF[i] <= 32'b0;
        end
        else begin
		
            if(WE) begin
				$display("%d@%h: $%d <= %h", $time, PCnow, A3,WD);
                if(A3!=0) GRF[A3] <= WD; // Writing $0 is ignored.
            end

        end
    end

endmodule
