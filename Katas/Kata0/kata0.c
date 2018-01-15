/*
Kata 0 - First algorithm
Rosa María Ramírez Moreno - A01700857
15-01-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int lenghtOfArray = argc, k;
    int nums[lenghtOfArray-1];
    for(k = 0 ; k < lenghtOfArray; k++){
        nums[k] = atoi(argv[k]);
    }
    int target = 9;
    int result[2];
    int i = 0, j = 0;

    for(i = 0; i < lenghtOfArray; i++){
        for(j = i + 1; j < lenghtOfArray; j++){
            if(nums[j] == target - nums[i]){
                result[0] = i-1;
                result[1] = j-1;
                printf("Indices [%d, %d]", result[0], result[1]);
                //return result;
            }
        }
    }
}