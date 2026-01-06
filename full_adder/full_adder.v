module full_adder(sum,carry,a,b,cin);
input a,b,cin;
output sum,carry;
assign sum = a ^ b ^ cin;
assign carry = (a & b) | (b & cin) | (a & cin);
endmodule