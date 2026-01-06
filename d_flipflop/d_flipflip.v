 module d_flipflop(d,clk,q,qbar);
 input d,clk;
 output reg q;
output wire qbar;

assign qbar = ~q;

 always @(posedge clk) begin
    q<=d;
 end
 endmodule   