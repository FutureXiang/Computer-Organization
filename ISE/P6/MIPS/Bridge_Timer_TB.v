`timescale 1ns / 1ps

module Bridge_Timer_TB;

	// Inputs
	reg [31:0] CPU_Addr;
	reg [31:0] CPU_WD;
	reg DEV_WE;
	reg CLK;
	reg RST;

	// Outputs
	wire [31:0] CPU_RD;
	wire [5:0] HWInt;

	// Instantiate the Unit Under Test (UUT)
	Bridge uut (
		.CLK(CLK),
		.RST(RST),
		.CPU_Addr(CPU_Addr), 
		.CPU_WD(CPU_WD), 
		.CPU_RD(CPU_RD), 
		.DEV_WE(DEV_WE), 
		.HWInt(HWInt)
	);

	initial begin
		CLK = 0;
		RST = 0;
		CPU_Addr = 0;
		CPU_WD = 0;
		DEV_WE = 0;

		# 10;
		CPU_Addr = 32'h00007F04;
		CPU_WD = 5;
		DEV_WE = 1;
		# 10;
		CPU_Addr = 32'h00007F14;
		CPU_WD = 5;
		DEV_WE = 1;
		
		# 10;
		CPU_Addr = 32'h00007F00;
		CPU_WD = {28'b0, 4'b1001};
		DEV_WE = 1;
		# 10;
		CPU_Addr = 32'h00007F10;
		CPU_WD = {28'b0, 4'b1001};
		DEV_WE = 1;
		#10;
		DEV_WE = 0;
		
		# 80;
		CPU_Addr = 32'h00007F00;
		CPU_WD = {28'b0, 4'b1001};
		DEV_WE = 1;
		# 10;
		CPU_Addr = 32'h00007F10;
		CPU_WD = {28'b0, 4'b1001};
		DEV_WE = 1;
		#10;
		DEV_WE = 0;
		// ------ ¡ü MODE 0
		#100;
		// ------ ¡ý MODE 1
		# 10;
		CPU_Addr = 32'h00007F04;
		CPU_WD = 7;
		DEV_WE = 1;
		# 10;
		CPU_Addr = 32'h00007F14;
		CPU_WD = 7;
		DEV_WE = 1;
		
		# 10;
		CPU_Addr = 32'h00007F00;
		CPU_WD = {28'b0, 4'b1011};
		DEV_WE = 1;
		# 10;
		CPU_Addr = 32'h00007F10;
		CPU_WD = {28'b0, 4'b1011};
		DEV_WE = 1;
		#10;
		DEV_WE = 0;
	
	end
    always #5 CLK = ~CLK;
endmodule

