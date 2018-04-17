#include <stdio.h>
#include <omp.h>

//gcc -o openmp.exe openmp.c -fopenmp
#define SIZE 20000

int main(){

    int a[SIZE];
    int b[SIZE];
    int c[SIZE];
    int chunk = 100;
    int j;

    for(int i = 0; i < SIZE; i++){
        a[i] = i;
        b[i] = 2 * i;
    }

    //primer bloque que quiero ejecutar
    #pragma omp parallel shared(a, b, c, chunk) private(j)
    {
        //chunk: pedacitos del sistema. Demoniaco. Demoniaco. Quiero usar todo mi hardware. :)
        #pragma omp for schedule(dynamic, chunk) nowait
        
            for(j = 0; j < SIZE; j++){
                printf("Processing chunk ");
                c[j] = a[j] + b[j];
            }
        
    }
    return 0;
}