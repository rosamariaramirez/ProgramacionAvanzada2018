#include <stdlib.h>
#include <stdio.h>
#include "inflight.h"

int twoMovies(int movies[], int flight, int numberOfMovies){
    for(int j = 0; j < numberOfMovies; j++){
        for(int k = 0; k < numberOfMovies; k++){
            if((movies[j] + movies[k] == flight) && j != k){
                return 1;
            }
        }
    }
    return 0;
}