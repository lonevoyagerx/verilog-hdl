module and_gate(y,a,b);
input a,b;
output y;

and(y,a,b);
endmodule


module and_dataflow(y,a,b);
input a,b;
output y;

assign y = a&b;
endmodule

module and_behaviour(y,a,b);
input a,b;
output reg y;

always @ (a,b) begin
   y = a&b;
end
endmodule
