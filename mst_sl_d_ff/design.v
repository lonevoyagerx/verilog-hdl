module master_slave_ff(clk,rst,d,master,q);
input clk,d,rst;
output reg q;
output reg master;

always@(posedge clk,negedge rst) begin
  if(!rst) 
     master<=0;
  else
     master<=d;
end
always@(negedge clk,negedge rst)begin
 if(!rst)
    q<=0;
else
    q<=master;
end
endmodule