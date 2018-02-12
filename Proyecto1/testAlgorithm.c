/*
Rosa María Ramírez Moreno
A01700857
12-02-18
*/

#include <stdio.h>
#include <stdlib.h>
#include "nontrivial.h"

void printTestMesssage(int, char *, char *);
float getTrivialityIndex(long number);
float testNontrivial1(void);
float testNontrivial2(void);

int main(){
    //Test nontrivial
    printTestMesssage(testNontrivial1(),
        "Nontrivial test 1 passed",        
        "Nontrivial test 1 failed \n");
    printTestMesssage(testNontrivial2(),
        "Nontrivial test 1 passed",        
        "Nontrivial test 1 failed \n");
    return 0;
}

void printTestMesssage(int condition, char *messagePassed, char *messageFailed){
    if(condition){
        printf("%s \n", messagePassed);
    }else{
        printf("%s \n", messageFailed);        
    }
}

float testNontrivial1(void){
    int a = 24;
    float result = getTrivialityIndex(a);
    float expected = 1.5;
    return result == expected;
}

float testNontrivial2(void){
    int a = 28;
    float result = getTrivialityIndex(a);
    float expected = 1;
    return result == expected;
}