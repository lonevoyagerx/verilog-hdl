module priority_tb( );
reg [3:0] d;
wire [1:0] y;
priority_encoder uut(d,y);
initial
begin
  $dumpvars(0,priority_tb);
  $monitor("d=%b y=%b",d,y);


d=4'b0000; #5
d=4'b1001; #10
d=4'b0011; #10
d=4'b1101; #10
d=4'b0101; #10
d=4'b0001; #10

$finish;
end
endmodule