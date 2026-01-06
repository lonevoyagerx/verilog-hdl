module t_flipflop(t,clk,q,qbar);
input t,clk;
output reg q;
output qbar;

assign qbar = ~q;

always @(posedge clk)begin
    q <= ~t;
end
endmodule