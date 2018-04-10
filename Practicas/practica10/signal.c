#include <stdio.h>
#include <unistd.h>

void receiveSignal(int sig){
    printf("Hola\n");
    printf("Recibi signal %d\n", sig);
}

int main(){
    signal(SIGUSR1, receiveSignal);
    while(1){
    }
    return 0;
}