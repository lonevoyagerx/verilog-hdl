module xor_gate(y,a,b);
input a,b;
output y;

xor(y,a,b);
endmodule

module xor_dataflow(y,a,b);
input a,b;
output y;

assign y = (a^b);
endmodule

module xor_behavioural(y,a,b);
input a,b;
output reg y;

always @(a,b) begin
   
   y = (a^b);
end
endmodule