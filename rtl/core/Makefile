
obj = riscx
VFLAGS = --trace --cc --exe --build

all:
	verilator ${VFLAGS} ${obj}_main.cpp ${obj}.v
	./obj_dir/V${obj}
	gtkwave wave.vcd

.PHONY : push
push:
	git add .
	git commit -m "2022/11/29"
	git push


.PHONY : clean
clean:
	rm -rf ./obj_dir *.vcd