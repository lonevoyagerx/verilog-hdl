module siso_shift_register (si,clk,rst,so);
input si,clk,rst;
output so;

reg [3:0]q;
always @(posedge clk)begin
    if(!rst)
    q<=4'b0000;
    else 
    q<={q[2:0],si};
end
assign so=q[3];
endmodule