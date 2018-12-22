`timescale 1ns / 1ps

module mips(
	input clk,
    input reset
    );

	wire [31:0] CPU_Addr, CPU_WD, CPU_RD;
	wire [5:0] HWInt;
	wire DEV_WE;

	CPU CPU (CPU_Addr, CPU_WD, CPU_RD, DEV_WE,
			HWInt,
			clk, reset);
	
	Bridge Bridge (clk, reset,
					CPU_Addr, CPU_WD, CPU_RD, DEV_WE,
					HWInt);

endmodule
