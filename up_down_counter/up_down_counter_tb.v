module tb_counter;

    reg         clk;
    reg         aresetn;
    reg         load;
    reg  [31:0] loaddata;
    reg         en;
    reg         updwn;
    wire [31:0] count;

     counter dut (
        .clk(clk),
        .aresetn(aresetn),
        .load(load),
        .loaddata(loaddata),
        .en(en),
        .updwn(updwn),
        .count(count)
    );

     always #5 clk = ~clk;

    initial begin
         clk      = 0;
        aresetn  = 0;
        load     = 0;
        loaddata = 32'h0;
        en       = 0;
        updwn    = 1;

         $dumpfile("counter.vcd");
        $dumpvars(0, tb_counter);

         $monitor("T=%0t | rstn=%b | load=%b | en=%b | updwn=%b | count=%h",
                  $time, aresetn, load, en, updwn, count);

         #3  aresetn = 0;
        #7  aresetn = 1;

         #10 load = 1;
            loaddata = 32'h0000_000A;
        #10 load = 0;

          #10 en = 1;
            updwn = 1;
        #50;

         updwn = 0;
        #50;

         en = 0;
        #20;

         load = 1;
        loaddata = 32'h0000_00FF;
        #10 load = 0;

         en = 1;
        updwn = 1;
        #30;

        $finish;
    end

endmodule

