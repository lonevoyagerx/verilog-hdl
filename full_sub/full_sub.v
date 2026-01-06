module full_sub(diff,borr,a,b,bin);
input a,b,bin;
output diff,borr;
assign diff = a^b^bin;
assign borr = (~a&b) | ((~a|b)&bin);
endmodule