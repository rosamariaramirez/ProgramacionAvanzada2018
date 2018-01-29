/*
Kata 2 - First algorithm
Rosa María Ramírez Moreno - A01700857
29-01-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int maxNumChars = 20, minNumChars = 6, k = 0;
    int password[maxNumChars];
    for(k = 0 ; k < maxNumChars; k++){
        if(atoi(argv[k]) == NULL){
            break;
        }
        password[k] = atoi(argv[k]);
    }
    printf("The minnimum amount of changes is: ", strongPasswordChecker(&password));
}

int strongPasswordChecker(int* s){ // i changed char for int in order to use ascii values
    while(s != NULL){
        //requiredChanges = 0;
        //check lenght -- insert chars
        //check lowercase --insert or replace chars
        //check uppercase -- insert or replace chars
        //check digit -- insert or replace
        //repeatedChars[2], to keep track of any 3-in-a-row repeated char -- deletion of repeated ones.
    }
}