`timescale 1ns / 1ps

module CMP(
    input [31:0] D1,
    input [31:0] D2,
    input [2:0] Branch,
    output CMP
    );

    assign CMP_eq = (D1 == D2);
	assign CMP_ne = (D1 != D2);
	assign CMP_lez = ($signed(D1) <= $signed(0));
	assign CMP_gtz = ($signed(D1) > $signed(0));
	assign CMP_ltz = ($signed(D1) < $signed(0));
	assign CMP_gez = ($signed(D1) >= $signed(0));
	wire [6:0] CMP_ALL = {CMP_gez, CMP_ltz, CMP_gtz, CMP_lez, CMP_ne, CMP_eq, 1'b0};
	assign CMP = CMP_ALL[Branch];

endmodule
