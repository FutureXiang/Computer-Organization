`timescale 1ns / 1ps


module CP0(
	input [4:0] A1,	  // read CP0
	output [31:0] RD, // read CP0
	input [4:0] A2,	  // write CP0
	input [31:0] WD,  // write CP0
	
	input WE,
	input clk,
	input rst,
	input EXLClr,		// Set By ERet !!!!!!

	input NextJumpAway,	// In Delay Slot: 1

	input [5:0] HWInt,	// External Devices
	input [4:0] ExcCode,// Internal Errors

	input [31:0] PCnow,
	output reg [31:0] EPC,
	output GO_HANDLE	// Xcp | Int
    );

	// ========================== CP0 REGS
	// SR
	reg [5:0] IntAllow; 	// IM
	reg       IntAllow_Glo; // IE
	reg 	  EXL;			// Exception Level
	// Cause
	reg BD;					// EPC <= PC-4 when Excp occured in DELAY SLOT
	reg [4:0] Exc;
	reg [5:0] Int; 			// IP: copy the HWINT


	// ========================== NOW STATUS !!!!!!
	`define NOEXC 5'd0
	wire IntReq = (|(HWInt[5:0] & IntAllow[5:0])) & IntAllow_Glo & (~EXL);
	wire ExcReq = (ExcCode!=`NOEXC) & (~EXL);
	assign GO_HANDLE = ExcReq | IntReq;

	assign RD = (A2==5'd12) ? ({16'b0, IntAllow, 8'b0, EXL, IntAllow_Glo}) : 
			  ( (A2==5'd13) ? ({BD, 15'b0, Int, 3'b0, Exc, 2'b0}) : 
			  ( (A2==5'd14) ? (EPC) : (32'h17231145) ) ) ;


	initial begin
		{IntAllow, EXL, IntAllow_Glo} <= 0;
		{BD, Int, Exc} <= 0;
		EPC <= 0;
	end
	always@(posedge clk) begin
		if(rst) begin
			{IntAllow, EXL, IntAllow_Glo} <= 0;
			{BD, Int, Exc} <= 0;
			EPC <= 0;
		end
		else begin
			// SR		fc01 : 6'b111111 + 0EXL + 1'b1
			// 			fc03 : 6'b111111 + 1EXL + 1'b1
			if(WE && (~GO_HANDLE) && A2==5'd12) begin
				// $display("%d@%h: $SR <= %h", $time, PCnow, WD);
				{IntAllow, EXL, IntAllow_Glo} <= {WD[15:10], WD[1], WD[0]};		// $12 = SR = {16'b0, IntAllow, 8'b0, EXL, IntAllow_Glo}
			end
			else if(GO_HANDLE) begin
				// $display("%d@%h: $SR <= %h", $time, PCnow, {16'b0, IntAllow, 8'b0, 1'b1, IntAllow_Glo});
				EXL <= 1;
			end
			else if(EXLClr) begin
				// $display("%d@%h: $SR <= %h", $time, PCnow, {16'b0, IntAllow, 8'b0, 1'b0, IntAllow_Glo});
				EXL <= 0;
			end
			
			// CAUSE:: $13 = CAUSE = {BD, 15'b0, Int, 3'b0, Exc, 2'b0}
			if(WE && (~GO_HANDLE) && A2==5'd13) begin
				// $display("%d@%h: $CAUSE <= %h", $time, PCnow, WD);
				{BD, Int, Exc} <= {WD[31], WD[15:10], WD[6:2]};
			end
			else begin
				Int <= HWInt;
				if(GO_HANDLE) begin
					BD <= NextJumpAway;
				end
				if(IntReq) begin
					Exc <= 0;
					// $display("%d@%h: $BD,$Int,$Exc <= %d,%d,%d", $time, PCnow, NextJumpAway, HWInt, 5'b0);
				end
				else if(ExcReq) begin
					Exc <= ExcCode;
					// $display("%d@%h: $BD,$Int,$Exc <= %d,%d,%d", $time, PCnow, NextJumpAway, HWInt, ExcCode);
				end
				
			end

			// EPC
			if(WE && (~GO_HANDLE) && A2==5'd14) begin
				// $display("%d@%h: $EPC <= %h", $time, PCnow, WD);
				EPC <= WD;
			end
			else if(GO_HANDLE & NextJumpAway) begin
				// $display("%d@%h: $EPC <= %h", $time, PCnow, PCnow - 4);
				EPC <= {PCnow[31:2], 2'b0} - 4;		// Excp IN DELAY SLOT
			end
			else if(GO_HANDLE & (~NextJumpAway)) begin
				// $display("%d@%h: $EPC <= %h", $time, PCnow, PCnow);
				EPC <= {PCnow[31:2], 2'b0};			// Normal Excp
			end

		end
	end
	
	
	
endmodule
