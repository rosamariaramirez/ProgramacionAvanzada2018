#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberOfSegments; //no vamos a malgastar ciclos en asignar valores. no las vamos a utilizar.
    int totalTime;
    
    int *distances;
    int *speeds;

    scanf("%d %d", &numberOfSegments, &totalTime);

    distances = (int *)malloc(sizeof(int)*numberOfSegments); //calloc es para inicializar
    speeds = (int *)malloc(sizeof(int)*numberOfSegments);
    for(int i = 0; i < numberOfSegments; i++){
        scanf("%d %d", &distances[i], &speeds[i]);
    }

    //print inputs
    // for(int i = 0; i < numberOfSegments; i++){
    //     printf("%d %d\n", distances[i], speeds[i]);        
    // }

    for(int i = 0; i < numberOfSegments; i++){

        //do math

    }

    return 0;
}