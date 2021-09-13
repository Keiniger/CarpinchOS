all:
	make -C kernel
	make -C memoria
	make -C swap
	make -C matelib

clean:
	make clean -C kernel
	make clean -C memoria
	make clean -C swap
	make clean -C matelib

kernel.out:
	make run -C kernel

memoria.out:
	make run -C memoria

swap.out:
	make run -C swap

matelib.out:
	make run -C matelib