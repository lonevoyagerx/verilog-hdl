module priority_encoder(d,y);
input [3:0] d;
output [1:0] y;
assign y[1]= d[2]|d[3];
assign y[0]=d[3]|((~d[2])&d[0]);
endmodule