compile:
	verilator -Wall --binary --trace --timing alu.v tb.v
run:
	./obj_dir/Valu
all: compile run
