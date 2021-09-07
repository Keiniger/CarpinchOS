all:
	make -C kernel
	make -C memoria
	make -C swap

clean:
	make clean -C kernel
	make clean -C memoria
	make clean -C swap

kernel.out:
	make run -C kernel

memoria.out:
	make run -C memoria

swap.out:
	make run -C swap