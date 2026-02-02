module nor_gate(y,a,b);
input a,b;
output y;

nor(y,a,b);
endmodule

module nor_dataflow(y,a,b);
input a,b;
output y;

assign y = ~(a|b);
endmodule

module nor_behavioural(y,a,b);
input a,b;
output reg y;

always @(a,b) begin
   
   y = ~(a|b);
end
endmodule
