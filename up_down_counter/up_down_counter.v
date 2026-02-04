module counter (
    input  wire        clk,        
    input  wire        aresetn,     
    input  wire        load,       
    input  wire [31:0] loaddata,    
    input  wire        en,          
    input  wire        updwn,        
    output reg  [31:0] count
);

     always @(posedge clk or negedge aresetn) begin
        if (!aresetn)
            count <= 32'b0;                
        else if (load)
            count <= loaddata;             
        else if (en) begin
            if (updwn)
                count <= count + 1;         
            else
                count <= count - 1;         
      end
      end

endmodule
