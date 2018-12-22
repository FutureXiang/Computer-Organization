`timescale 1ns / 1ps
module code(
    input Clk,
    input En,
    input Reset,
    input Slt,
    output [63:0] Output0,
    output [63:0] Output1
    );
	reg [63:0] RegOutput0;
	reg [63:0] RegOutput1;
	initial begin
		RegOutput0 <= 0;
		RegOutput1 <= 0;
	end
	assign Output0 = RegOutput0;
	assign Output1 = RegOutput1>>2;
	
	always@(posedge Clk) begin
		if(Reset) begin
			RegOutput0 <= 0;
			RegOutput1 <= 0;
		end
		else if(En) begin
			if(Slt==0)
				//0, 1T
				RegOutput0<=RegOutput0+1;
			else
				//1, 4T
				RegOutput1<=RegOutput1+1;
		end
	end

endmodule
