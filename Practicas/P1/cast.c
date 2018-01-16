#include <stdio.h>

int main(){
    int a = 4;
    int j;
    // en una arquitectura de 32, el puntero siempre es de 4bits
    int *p; //cuidar la asignacion de punteros, puedes hacer una gran daga. Si la direccion no es la correcta :D
    float f = 7.5;
    int max = 2147483647; //2^31 - 1
    long int d;

    int b = a + (int)f; // 11, si no hago el cast a int, será más rapido. porque no necesito hacer ningún otro cast.
    float c  = a * f;

    int array[5] = {0, 2}; //los bits son contiguos. El arreglo es un puntero a su primer direccion. Inicializo todo elemento a cero con {0}.
    //array = &arreglo[0]
    //*(arreglo + 1) = 20
    //es lo mismo que decir
    //arreglo[1] = 20

    d = (long)max * max; // al castear 1, el otro también es convertido al mayor tipo.

    p = array; //es comun utilizar un apuntador para acceder a los apuntadores de un arreglo.
    //Aquí inicializo el arreglo:
    for(int k = 0; k < sizeof(array) / sizeof(array[0]); k++){
        //*p++ = 67;
        //same as:
        *p = 67;
        p++; 
        //lo mismo que array[k] = 67;
        // o p[k] = 67;
    }

    p = &a; //p es la direccion de a.
    *p = 7; //p es el contenido de la variable que apunta.
    p++;
    *p = 8;
    printf(" p = %p, a = %d, j = %d, b = %d, d = %ld \n", p, a, j, b, d); // da lo mismo si pongo %i o %d. Pero en el scanf si hay pex. %ld - long. %p - puntero(imprime en hexadecimal)
    //&a muestra la direccion donde esta guardada a.
    //los punteros siempre son del mismo tamaño (dependiendo de la arquitectura).
    printf(" f = %f, c = %f, arreglo = %d\n", f, c, arreglo[1]);

    return 0;
}