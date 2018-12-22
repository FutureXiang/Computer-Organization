`timescale 1ns / 1ps

module DataMemory(
    input [31:0] Addr, // bytes lowest addr
    input [31:0] WD,
    input clk,
    input reset,
    input WE,
    output [31:0] Read,
	input [31:0] PCnow 
    );
	
	reg [31:0] DataMemory [1023:0];
    integer i;

    initial begin
        for(i=0; i<1024; i=i+1)
            DataMemory[i] <= 32'b0;
    end

	assign Read = DataMemory[Addr[11:2]];

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<1024; i=i+1)
				DataMemory[i] <= 32'b0;
        end
        else begin
		
            if(WE) begin
				$display("%d@%h: *%h <= %h", $time, PCnow, Addr, WD);
                DataMemory[Addr[11:2]] <= WD;
            end

        end
    end
	

endmodule
