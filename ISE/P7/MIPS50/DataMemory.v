`timescale 1ns / 1ps

module DataMemory(
    input [31:0] Addr, // bytes lowest addr
    input [31:0] WD,
    input clk,
    input reset,
    input WE,
    output [31:0] Read,
	input [31:0] PCnow,
	
	input [3:0] code,	// lw, lh, lb, lhu, lbu; sw, sh, sb, no
	output [1:0] AddrException
    );
	
	reg [31:0] DataMemory [4095:0];
    integer i;

    initial begin
        for(i=0; i<4096; i=i+1)
            DataMemory[i] <= 32'b0;
    end

	`define lw  4'b0000
	`define sw  4'b0001
	`define lh  4'b0010
	`define lb  4'b0011
	`define lhu 4'b0100
	`define lbu 4'b0101
	`define sh  4'b0110
	`define sb  4'b0111
	`define no  4'b1000

	assign WORD = (code==`sw) | (code==`lw);
	assign HALF = (code==`sh) | (code==`lh) | (code==`lhu);
	assign BYTE = (code==`sb) | (code==`lb) | (code==`lbu);
	assign Save = (code==`sw) | (code==`sh) | (code==`sb);
	assign Load = (code==`lw) | (code==`lh) | (code==`lhu) | (code==`lb) | (code==`lbu) ;
	
	// ==================== Exception
	assign hitDM =    (Addr>=32'h00000000 & Addr<=32'h00002fff);
	assign hit_DEV1 = (Addr>=32'h00007F00 & Addr<=32'h00007F0B);
	assign hit_DEV2 = (Addr>=32'h00007F10 & Addr<=32'h00007F1B);

    assign AddrWrongRange = ~( ((Addr >= 32'h00000000)&(Addr <= 32'h00002ffc)) | ((Addr >= 32'h00007F00)&(Addr <= 32'h00007F0B)) | ((Addr >= 32'h00007F10)&(Addr <= 32'h00007F1B)) );
	assign AddrWrongWORD = ( (Addr[1:0]!=2'b00) | AddrWrongRange );
	assign AddrWrongHALF = ( (Addr[0]!=1'b0)    | AddrWrongRange );
	assign AddrWrongBYTE = AddrWrongRange;	

	assign AddrException = ( Save & ( (WORD & AddrWrongWORD) | (HALF & AddrWrongHALF) | (BYTE & AddrWrongBYTE) | (Addr==32'h00007F08 | Addr==32'h00007F18) | ((HALF|BYTE)&(hit_DEV1|hit_DEV2)) ) ) ? (2'b11) :
						   ( Load & ( (WORD & AddrWrongWORD) | (HALF & AddrWrongHALF) | (BYTE & AddrWrongBYTE) | ((HALF|BYTE)&(hit_DEV1|hit_DEV2)) )   ? (2'b10) :  (2'b00) );

	// ==================== Read (Load)

	wire [31:0] ReadWORD = DataMemory[Addr[13:2]] ;

	wire [15:0] ReadHALF00 = ReadWORD[15:0];
	wire [15:0] ReadHALF10 = ReadWORD[31:16];
	wire [15:0] ReadHALF_temp = (Addr[1:0]==2'b00) ? ReadHALF00 : ReadHALF10 ;
	wire [31:0] ReadHALF_signed     = { {16{ReadHALF_temp[15]}} , ReadHALF_temp };
	wire [31:0] ReadHALF_unsigned   = { 16'b0                   , ReadHALF_temp };
	wire [31:0] ReadHALF = (code==`lh) ? ReadHALF_signed : ReadHALF_unsigned ;

	wire [7:0] ReadBYTE00 = ReadWORD[7:0];
	wire [7:0] ReadBYTE01 = ReadWORD[15:8];
	wire [7:0] ReadBYTE10 = ReadWORD[23:16];
	wire [7:0] ReadBYTE11 = ReadWORD[31:24];
	wire [7:0] ReadBYTE_temp  = (Addr[1:0]==2'b00) ? ReadBYTE00 : 
					  			( (Addr[1:0]==2'b01) ? ReadBYTE01 :
					  			( (Addr[1:0]==2'b10) ? ReadBYTE10 : ReadBYTE11 ) );
	wire [31:0] ReadBYTE_signed     = { {24{ ReadBYTE_temp[7]}} , ReadBYTE_temp}; 
	wire [31:0] ReadBYTE_unsigned   = { 24'b0                   , ReadBYTE_temp}; 
	wire [31:0] ReadBYTE = (code==`lb) ? ReadBYTE_signed : ReadBYTE_unsigned ;

	assign Read = (WORD) ? (ReadWORD) : ( (HALF) ? (ReadHALF) : (ReadBYTE) ) ;


	// ==================== Write (Save)
    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<4096; i=i+1)
				DataMemory[i] <= 32'b0;
        end
        else begin
		
            if(WE) begin
                if(hitDM & (~AddrException)) begin
					if(WORD) begin
						DataMemory[Addr[13:2]] <= WD;
						$display("%d@%h: *%h <= %h", $time, PCnow, Addr, WD);
					end
					else if(HALF) begin
						if(Addr[1:0]==2'b00) begin
							$display("%d@%h: *%h <= %h", $time, PCnow, {Addr[31:2], 2'b0}, { DataMemory[Addr[13:2]][31:16] , WD[15:0]});
							DataMemory[Addr[13:2]][15:0]  <= WD[15:0];
						end
						if(Addr[1:0]==2'b10) begin
							$display("%d@%h: *%h <= %h", $time, PCnow, {Addr[31:2], 2'b0}, { WD[15:0] , DataMemory[Addr[13:2]][15:0]});
							DataMemory[Addr[13:2]][31:16] <= WD[15:0];
						end
					end
					else if(BYTE) begin
						if(Addr[1:0]==2'b00) begin
							$display("%d@%h: *%h <= %h", $time, PCnow, {Addr[31:2], 2'b0}, { DataMemory[Addr[13:2]][31:8] , WD[7:0]});
							DataMemory[Addr[13:2]][7:0]   <= WD[7:0];
						end
						if(Addr[1:0]==2'b01) begin
							$display("%d@%h: *%h <= %h", $time, PCnow, {Addr[31:2], 2'b0}, { DataMemory[Addr[13:2]][31:16] , WD[7:0], DataMemory[Addr[13:2]][7:0]});
							DataMemory[Addr[13:2]][15:8]  <= WD[7:0];
						end
						if(Addr[1:0]==2'b10) begin
							$display("%d@%h: *%h <= %h", $time, PCnow, {Addr[31:2], 2'b0}, { DataMemory[Addr[13:2]][31:24] , WD[7:0], DataMemory[Addr[13:2]][15:0]});
							DataMemory[Addr[13:2]][23:16] <= WD[7:0];
						end
						if(Addr[1:0]==2'b11) begin
							$display("%d@%h: *%h <= %h", $time, PCnow, {Addr[31:2], 2'b0}, { WD[7:0], DataMemory[Addr[13:2]][23:0]});
							DataMemory[Addr[13:2]][31:24] <= WD[7:0];
						end
					end
				end
				// REMEMBER TO CANCEL !!!!!
				// if((hit_DEV1 | hit_DEV2) & (~AddrException))
					// $display("%d@%h: *%h <= %h", $time, PCnow, Addr, WD);
            end

        end
    end
	

endmodule
