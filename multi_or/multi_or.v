module or_gate(y,a,b);
input a,b;
output y;

or(y,a,b);
endmodule

module or_dataflow(y,a,b);
input a,b;
output y;

assign y = a|b;
endmodule

module or_behavioural(y,a,b);
input a,b;
output reg y;

always @(a,b) begin
   
   y = a|b;
end
endmodule

