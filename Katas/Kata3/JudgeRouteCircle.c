/*
Kata 3 - Judge Route Circle
Rosa María Ramírez Moreno - A01700857
05-02-2018


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int lenghtOfArray = argc;
    char *robotMoves = NULL;
    int r = 0, l = 0, d = 0, u = 0;
    for(int k = 0 ; k < lenghtOfArray; k++){
        robotMoves = argv[k];
        if((lenghtOfArray % 2) != 0){
            printf ("false");
        }else{
            if(robotMoves == 'R'){
                r++;
            }else if(robotMoves == 'L'){
                l++;
            }else if(robotMoves == 'D'){
                d++;
            }else if(robotMoves == 'U'){
                u++;
            }else{
                printf ("false");
            }
        }
    }
    if((r == l) && (u == d)){
        printf ("true");
    }else{
        printf ("false");
    }
    return 0;
}

*/