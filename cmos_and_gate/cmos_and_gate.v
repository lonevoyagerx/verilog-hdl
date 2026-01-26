module cmos_nand_gate(y,a,b);
input a,b;
output  y;

assign y = ~(a|b);
endmodule

module inverter(a,y);
input a;
output y;

assign y = ~a;
endmodule

module cmos_and_gate(a,b,y);
input a,b;
output y;

wire nand_out;

cmos_nand_gate u1 (.a(a), .b(b), .y(nand_out));
inverter u2 (.a(nand_out), .y(y));
endmodule