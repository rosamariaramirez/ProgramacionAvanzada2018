LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c difference.c
	 gcc -c main.c
	 gcc -o difference.exe difference.o main.o $(LIB)

differencetest: clean
	 gcc -c difference.c
	 gcc -c differencetest.c
	 gcc -o differencetest.exe difference.o differencetest.o
	 ./differencetest.exe

test:	 differencetest

clean:
	 rm *.out *.o *.exe || exit 0

difference: clean
	 gcc -c difference.c
	 gcc -c main.c
	 gcc -o difference.exe difference.o main.o $(LIB)

run: difference
	 ./difference.exe

runtest: difference
	 ./maintest.tcl ./difference.exe

