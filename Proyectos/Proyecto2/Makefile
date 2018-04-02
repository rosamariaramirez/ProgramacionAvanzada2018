LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c closeMatch.c
	 gcc -c main.c
	 gcc -o closeMatch.exe closeMatch.o main.o $(LIB)

closeMatchtest: clean
	 gcc -c closeMatch.c
	 gcc -c closeMatchtest.c
	 gcc -o closeMatchtest.exe closeMatch.o closeMatchtest.o
	 ./closeMatchtest.exe

test:	 closeMatchtest

clean:
	 rm *.out *.o *.exe || exit 0

closeMatch: clean
	 gcc -c closeMatch.c
	 gcc -c main.c
	 gcc -o closeMatch.exe closeMatch.o main.o $(LIB)

run: closeMatch
	 ./closeMatch.exe

runtest: closeMatch
	 ./maintest.tcl ./closeMatch.exe

