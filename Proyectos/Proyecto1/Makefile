LIB := $(shell find ./lib -name '*.o')
all:
	gcc main.c nontrivial.c -o p.exe
	gcc testAlgorithm.c nontrivial.c -o t.exe

run: example
	./t.exe
	./p.exe 24 28