module cmos_nor_gate(out,a,b);
input a,b;
output out;

supply1 vdd;
supply0 gnd;
wire n1;

  pmos (n1, vdd, a);
  pmos (out, n1, b);

  nmos (out, gnd, a);
  nmos (out, gnd, b);
  
endmodule
