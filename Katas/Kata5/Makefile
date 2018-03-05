LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c words.c
	 gcc -c main.c
	 gcc -o words.exe words.o main.o $(LIB)

wordstest: clean
	 gcc -c words.c
	 gcc -c wordstest.c
	 gcc -o wordstest.exe words.o wordstest.o
	 ./wordstest.exe

test:	 wordstest

clean:
	 rm *.out *.o *.exe || exit 0

words: clean
	 gcc -c words.c
	 gcc -c main.c
	 gcc -o words.exe words.o main.o $(LIB)

run: words
	 ./words.exe

runtest: words
	 ./maintest.tcl ./words.exe

