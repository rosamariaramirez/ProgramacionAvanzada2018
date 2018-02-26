LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c ValidNumber.c
	 gcc -c main.c
	 gcc -o ValidNumber.exe ValidNumber.o main.o $(LIB)

ValidNumbertest: clean
	 gcc -c ValidNumber.c
	 gcc -c ValidNumbertest.c
	 gcc -o ValidNumbertest.exe ValidNumber.o ValidNumbertest.o
	 ./ValidNumbertest.exe

test:	 ValidNumbertest

clean:
	 rm *.out *.o *.exe || exit 0

ValidNumber: clean
	 gcc -c ValidNumber.c
	 gcc -c main.c
	 gcc -o ValidNumber.exe ValidNumber.o main.o $(LIB)

run: ValidNumber
	 ./ValidNumber.exe

runtest: ValidNumber
	 ./maintest.tcl ./ValidNumber.exe

