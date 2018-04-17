//crear hilos

#include <stdio.h>
#include <pthread.h>

#define MAX_THREADS 20

void *helloThread(void *arg){
    
    int id = *((int *)arg);
    printf("Hello Worldy! %d\n", id);
    return NULL;
}

//main es mi proceso principal, y se ejecutan los threads que alcancen antes de que él muera.
int main(){
    pthread_t threads[MAX_THREADS];
    for(int i = 0; i < MAX_THREADS; i++){
        pthread_create(
            &threads[i],
            NULL,
            helloThread,
            //(void *)&i
            (void *)&i
        );
    }
    for(int i = 0; i < MAX_THREADS; i++){
        pthread_join(threads[i], NULL);
    }
    return 0;
}