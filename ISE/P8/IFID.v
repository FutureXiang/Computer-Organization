module IFID(
    input [31:0] in_IR,
    input [31:0] in_PCp4,
	
    input FREEZE,
    input CLK,
	input reset,
	
    output reg [31:0] IR,
    output reg [31:0] PCp4,
	
	input [4:0] X_in,
	output reg [4:0] X
    );

	/*initial begin
		IR <= 0;
		PCp4 <= 0;
		X <= 0;
	end*/

    always @ (posedge CLK) begin
		if(reset) begin
			IR <= 0;
			PCp4 <= 0;
			X <= 0;
		end
        else if(!FREEZE) begin
            IR <= in_IR;
            PCp4 <= in_PCp4;
			X <= X_in;
        end
    end

endmodule