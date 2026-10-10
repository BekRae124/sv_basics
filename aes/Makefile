VERILATOR = verilator

TOP = aes

SV_FILES = \
	sbox.sv \
	key_gen.sv \
	full_sbox.sv \
	aes_functions.sv \
	aes.sv

TB = aes_tb.cpp

.PHONY: all build run clean lint

all: build

build:
	$(VERILATOR) --cc --trace \
		--top-module $(TOP) \
		$(SV_FILES) \
		--exe $(TB) \
		--build
	
run: build
	./obj_dir/V$(TOP)

lint:
	$(VERILATOR) --lint-only \
		--top-module $(TOP) \
		$(SV_FILES)

clean:
	rm -rf obj_dir
	rm -f *.vcd