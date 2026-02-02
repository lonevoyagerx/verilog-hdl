module nand_gate(y,a,b);
input a,b;
output y;

nand(y,a,b);
endmodule


module nand_dataflow(y,a,b);
input a,b;
output y;

assign y = ~(a&b);
endmodule

module nand_behaviour(y,a,b);
input a,b;
output reg y;

always @ (a,b) begin
   y = ~(a&b);
end
endmodule