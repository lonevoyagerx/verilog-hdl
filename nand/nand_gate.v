module nand_gate(a,b,y);
input a,b;
output y;
nand a1(y,a,b);
endmodule