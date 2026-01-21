module four_bit(x,y,z,a,b);
input[3:0]a;
input[3:0]b;
output reg x;
output reg y;
output reg z;

always @(*) begin
if(a<b) begin
    x=1;y=0;z=0;
    
end

else if (a == b)begin
   x=0;y=1;z=0;
end

else begin
    x=0;y=0;z=1;
end
end
endmodule


