#include <stdio.h>
#include <unistd.h>

int main(){
    int pid;
    //el proceso hijo-padre
    pid = fork();
    if(pid == 0){
        execl("C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe", "Chrome", (char *)0);
        //y ahora esto no se ejecuta, poque exec reemplazó el código:
        printf("Soy el proceso hijo. \n");
    }else{
        printf("Soy el proceso padre. \n");
    }
    printf("Somos clones");
    return 0;
}