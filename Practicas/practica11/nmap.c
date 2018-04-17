#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include "student.h"

//estamos modificando el archivo.
//PASAR EL ARCHIVO A UN BLOQUE DE MEMORIA

int main() {
    char *fileName = "student.dat";
    int fd = open(fileName, O_RDWR);
    Student *pAvanzada = (Student *)mmap(
        NULL,
        10 * sizeof(Student),
        PROT_READ | PROT_WRITE,
        MAP_FILE | MAP_PRIVATE,
        fd,
        0);
    close(fd);
    
    printf("Student at 5 \n");
    printf("%s", pAvanzada[5].firstName);

    munmap(pAvanzada, 10 * sizeof(Student));
    return 0;
}