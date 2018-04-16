LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c inflight.c
	 gcc -c main.c
	 gcc -o inflight.exe inflight.o main.o $(LIB)

inflighttest: clean
	 gcc -c inflight.c
	 gcc -c inflighttest.c
	 gcc -o inflighttest.exe inflight.o inflighttest.o
	 ./inflighttest.exe

test:	 inflighttest

clean:
	 rm *.out *.o *.exe || exit 0

inflight: clean
	 gcc -c inflight.c
	 gcc -c main.c
	 gcc -o inflight.exe inflight.o main.o $(LIB)

run: inflight
	 ./inflight.exe

runtest: inflight
	 ./maintest.tcl ./inflight.exe

