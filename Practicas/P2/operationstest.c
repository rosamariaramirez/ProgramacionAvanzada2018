/*
Rosa María Ramírez Moreno
A01700857
22-01-18
*/

#include <stdio.h>
#include "operations.h"

void printTestMesssage(int, char *, char *);
int testAddition(void);
int testSubstraction(void);

int main(){
    //Test add
    printTestMesssage(testAddition(),
        " add test 1 passed",        
        " add test 1 failed \n");

    //Test substraction
    printTestMesssage(testSubstraction(),
        " substraction test 2 passed ",
        " substraction test 2 failed ");        
    
    return 0;
}

void printTestMesssage(int condition, char *messagePassed, char *messageFailed){
    if(condition){
        printf("%s \n", messagePassed);
    }else{
        printf("%s \n", messageFailed);        
    }
}

int testAddition(void){
    int a = 5;
    int b = 7;
    int result = add(a, b);
    int expected = a + b;
    return result == expected;
}

int testSubstraction(void){
    int c = 2;
    int d = 1;
    int result2 = substraction(c, d);
    int expected2 = c - d;
    return result2 == expected2;
}