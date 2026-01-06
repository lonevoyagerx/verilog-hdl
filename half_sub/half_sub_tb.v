module half_sub_tb;
wire diff,borr;
reg a,b;
half_sub hs1(.diff(diff), .borr(borr), .a(a), .b(b));

initial begin
    $dumpfile("half_sub.vcd");
    $dumpvars(0,half_sub_tb);
    $monitor("a=%b b=%b => diff=%b borr=%b",a,b,diff,borr);
    
    a=0; b=0; #10;
    a=0; b=1; #10;
    a=1; b=0; #10;
    a=1; b=1; #10;

    $finish;
end
endmodule