#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "qsort.h"

static int compareById(const void *element1, const void *element2){
    Student *student1 = (Student *)element1;
    Student *student2 = (Student *)element2;
    return student1->id - student2->id;
    /*
    Student a;
    Student *p;

    a.id
    a.name

    p=&a
    p->id al ser apuntador, busca el contenido de su dirección, y ahí el atributo
    */

}

static int compareByName(const void *element1, const void *element2){
    Student *student1 = (Student *)element1;
    Student *student2 = (Student *)element2;
    return strcmp(student1->name, student2->name);
}

void sortById(Student *class, int numElements){
    qsort((void*) class, (size_t)numElements, sizeof(Student), compareById);
    return;
}

void sortByName(Student *class, int numElements){
    qsort((void*) class, (size_t)numElements, sizeof(Student), compareByName);
    return;
}