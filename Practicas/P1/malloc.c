#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int doFullName(char *firstName, 
               char *lastName, 
               char **fullName) // ** es la direccion de la direccion. El *es el valor de esa direccion.
{
    int sizeFirstName = strlen(firstName);
    int sizeLastName = strlen(lastName);
    *fullName = (char *) malloc((sizeFirstName + sizeLastName + 1) * sizeof(char));
    strcpy(*fullName, firstName);
    strcpy(*fullName + sizeFirstName, " " );
    strcpy(*fullName + sizeFirstName + 1, lastName );
    return 0;
}

int main(){
    char firstName[] = "Rosa"; //aqui puedo iterar y modificar el arreglo
    char *lastName = "Ramirez"; //no la modifico, no estoy declarandolo como arreglo. Es constante
    char *fullName;

    doFullName(firstName, lastName, &fullName);

    printf("fullName = %s \n", fullName);
    free(fullName);

    return 0;
}