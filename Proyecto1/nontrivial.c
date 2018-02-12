/*
Rosa María Ramírez Moreno
A01700857
12-02-18
*/

//#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "nontrivial.h"

float getTrivialityIndex(long number){
    long divisor = 1;
    float sum = 0;
    float result = 0;
    while(divisor < number){
        if(number % divisor == 0){
            sum += divisor;
        }
        divisor++;
    }
    result = sum / number;
    printf("Result : %f \n", result);
    return result;
}
