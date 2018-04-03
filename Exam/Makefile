LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c reverse.c
	 gcc -c main.c
	 gcc -o reverse.exe reverse.o main.o $(LIB)

reversetest: clean
	 gcc -c reverse.c
	 gcc -c reversetest.c
	 gcc -o reversetest.exe reverse.o reversetest.o
	 ./reversetest.exe

test:	 reversetest

clean:
	 rm *.out *.o *.exe || exit 0

reverse: clean
	 gcc -c reverse.c
	 gcc -c main.c
	 gcc -o reverse.exe reverse.o main.o $(LIB)

run: reverse
	 ./reverse.exe

runtest: reverse
	 ./maintest.tcl ./reverse.exe

