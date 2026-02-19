module two_mux(a,b,s,y);
input a,b,s;
output y;
wire S_bar;
wire t1, t2;

not U1 (S_bar, s);
and U2 (t1, a, S_bar);
and U3 (t2, b, s);
or U4 (y, t1, t2);
endmodule
