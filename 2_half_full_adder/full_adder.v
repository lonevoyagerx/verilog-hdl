module half_adder(sum,carry,a,b);
input a,b;
output sum,carry;
assign sum = a ^ b;
assign carry = a & b;
endmodule

module full_adder(sum,carry,a,b,cin);
input a,b,cin;
output sum,carry;
wire sum1,carry1,carry2;
half_adder h1(sum1,carry1,a,b);
half_adder h2(sum,carry2,sum1,cin);
assign carry = carry1 | carry2;
endmodule
 