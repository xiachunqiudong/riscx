VFLAGS = --trace --cc --exe --build

all:
	verilator ${VFLAGS} ${obj}_main.cpp ${obj}.v
	./obj_dir/V${obj}

show: all
	gtkwave wave.vcd


.PHONY : push
push:
	git add .
	git commit -m "$(shell date)"
	git push

.PHONY : clean
clean:
	rm -rf ./obj_dir *.vcd