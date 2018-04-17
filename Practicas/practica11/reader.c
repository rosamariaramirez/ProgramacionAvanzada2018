#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include "student.h"
#include <string.h>

//estamos modificando el archivo.
//PASAR EL ARCHIVO A UN BLOQUE DE MEMORIA

int main() {
    char *fileName = "student.dat";
    int fd = open(fileName, O_RDWR);
    int id;
    char name[20];
    Student *pAvanzada = (Student *)mmap(
        NULL,
        10 * sizeof(Student),
        PROT_READ | PROT_WRITE,
        MAP_FILE | MAP_SHARED,
        fd,
        0);
    close(fd);

    for(int i = 0; i < 4; i++){
        printf("Give me ID: \n");
        scanf("%d", &id);
        printf("student[%d] = %s \n", id, 
        pAvanzada[id].firstName);
    }

    munmap(pAvanzada, 10 * sizeof(Student));
    return 0;
}