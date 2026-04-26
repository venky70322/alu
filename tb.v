

module tb;

reg  [3:0] a;
reg  [3:0] b;
reg  [2:0] sel;
wire [4:0] y;

alu dut (
    .a(a),
    .b(b),
    .sel(sel),
    .y(y)
);

initial begin
    $dumpfile("alu.vcd");
    $dumpvars(0, tb);

    a = 4'd8; b = 4'd3;

    sel = 3'b000; #10; // Add
    sel = 3'b001; #10; // Sub
    sel = 3'b010; #10; // AND
    sel = 3'b011; #10; // OR
    sel = 3'b100; #10; // XOR
    sel = 3'b101; #10; // NOR
    sel = 3'b110; #10; // Greater
    sel = 3'b111; #10; // Equal

    $finish;
end

initial begin
    $monitor("time=%0t a=%d b=%d sel=%b y=%d",
              $time,a,b,sel,y);
end

endmodule
