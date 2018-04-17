#include <stdio.h>
#include <omp.h>

//gcc -o openmp.exe openmp.c -fopenmp

int main(){
    int tid;
    int gid = 1;
    #pragma omp parallel private(tid) shared(gid)
    {
        tid = omp_get_thread_num();
        gid = tid;
        printf("Hello world %d %d\n", tid, gid);
    }
    return 0;
}