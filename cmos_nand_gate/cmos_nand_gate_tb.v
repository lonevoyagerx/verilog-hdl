module cmos_nand_gate_tb;

  reg a, b;
  wire out;

  cmos_nand_gate dut (
    .out(out),
    .a(a),
    .b(b)
  );

  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, cmos_nand_gate_tb);
    $monitor("a = %b | b = %b | out = %b", a, b, out);

    a = 0; b = 0; #10;
    a = 0; b = 1; #10;
    a = 1; b = 0; #10;
    a = 1; b = 1; #10;

    $finish;
  end

endmodule
