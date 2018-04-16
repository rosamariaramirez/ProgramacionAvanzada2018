#include <stdlib.h>
#include <stdio.h>
#include "inflight.c"

int twoMovies(int[], int, int);

int main(int argc, char **argv[]){

    int returnValue = 0;
    int flight = 0, numberOfMovies = 0;
    printf("Enter length of flight: \n");
    scanf("%d", &flight);
    printf("Enter number of available movies: \n");
    scanf("%d", &numberOfMovies);

    int movies[numberOfMovies];
    printf("Enter length of movies: \n");
    for(int i = 0; i < numberOfMovies; i++){
        scanf("%d", &movies[i]);
    }

    returnValue = twoMovies(movies, flight, numberOfMovies);

    if(returnValue){
        printf("TRUE \n");
    }else{
        printf("FALSE \n");
    }

    return 0;
}