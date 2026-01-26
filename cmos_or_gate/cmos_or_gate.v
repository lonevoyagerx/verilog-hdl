module cmos_nor_gate(y,a,b);
input a,b;
output  y;

assign y = ~(a|b);
endmodule

module inverter(a,y);
input a;
output y;

assign y = ~a;
endmodule

module cmos_or_gate(a,b,y);
input a,b;
output y;

wire nor_out;

cmos_nor_gate u1 (.a(a), .b(b), .y(nor_out));
inverter u2 (.a(nor_out), .y(y));
endmodule