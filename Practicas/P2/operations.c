/*
Rosa María Ramírez Moreno
A01700857
22-01-18
*/
#include <assert.h>
#include "operations.h"

#define MAX_INT_32 2147483647
#define MIN_INT_32 -2147483648

///Use long addition to catch overflow
int add(int a, int b){
    //Do addition and check if there is an overflow.
    long c = (long) a + b;
    assert(c <= MAX_INT_32 && c > MIN_INT_32);
    return (int) c;
}

///Use long substraction to catch overflow
int substraction(int a, int b){
    //Do substraction and check if there is an overflow.
    long c = (long) a - b;
    assert(c <= MAX_INT_32 && c > MIN_INT_32);
    return (int) c;
}