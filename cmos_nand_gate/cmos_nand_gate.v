module cmos_nand_gate(out,a,b);
input a,b;
output out;

supply1 vdd;
supply0 gnd;
wire n1;

pmos(out,vdd,a);
pmos(out,vdd,b);

nmos(n1,gnd,a);
nmos(out,n1,b);

endmodule
