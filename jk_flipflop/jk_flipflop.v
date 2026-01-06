module jk_flipflop(j,k,clk,q,qbar);
input j,k,clk;
output qbar;
output reg q;

assign qbar = ~q;

always @(negedge clk) begin
    if(j == 0 && k == 0)
    q <= q;
    else if(j == 0 && k == 1)
    q <= 0;
    else if(j == 1 && k == 1)
    q <= 1;
    else
    q <= ~q;
end
endmodule

;