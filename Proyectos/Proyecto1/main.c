/*
Rosa María Ramírez Moreno
A01700857
12-02-18
*/

#include <stdio.h>
#include <stdlib.h>
#include "nontrivial.h"

#define MAX 1000000

float getTrivialityIndex(long number);

int main(int argc, char *argv[]){
    int lenghtOfArray = argc;
    long x, y, sizeOfRange;

    //If more than 2 args are received, error.
    if(lenghtOfArray > 3){
        printf("Too many arguments, two natural numbers separated by space expected. \n");
        return 0;
    }

    //assign values to x and y
    x = atoi(argv[1]);
    printf("x: %ld\n", x);
    y = atoi(argv[2]);
    printf("y: %ld\n", y);

    //other validations for received values
    //TODO separate code in nontrivial.h
    if(x > MAX || y > MAX){
        printf("Too many arguments, two natural numbers expected. \n");
        return 0;
    }
    if(x < 1 || y < 1){
        printf("Wrong arguments, two natural numbers separated by space expected. \n");
        return 0;
    }
    if(x > y){
        printf("Wrong range, x <= y. \n");
        return 0;
    }

    sizeOfRange = y - x;

    //create an array of numbers between the range (x, y)
    //TODO - maybe create a dictionary instead of using arrays.
    long numbers[sizeOfRange];
    //create an array of triviality indices
    float trivialityIndex[sizeOfRange];
    long counter = 0;
    long startingPoint = x;
    long nonTrivial = 0;

    //TODO separate code into nontrivial.h
    while(counter < sizeOfRange){
        numbers[counter] = startingPoint;
        printf("numeros del rango: %ld \n", numbers[counter]);
        trivialityIndex[counter] = getTrivialityIndex(startingPoint);
        //verify the least trivial index
        //TODO, DELETE this array. Not needed.
        if(trivialityIndex[counter] < trivialityIndex[nonTrivial]){
            nonTrivial = counter;
        }
        startingPoint++;
        counter++;
    }

    printf("NonTrivial index: %ld \n", nonTrivial);
    printf("The least trivial number is: %ld \n", numbers[nonTrivial]);
    return 0;
}