#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

//macros en C. Los 3 puntitos son todos los argumentos que se le pasen.
#define printDebug(...) do{\
    char * isDebug;\
    char message[255];\
    isDebug = getenv("DEBUG");\
    if(isDebug != NULL && !strcasecmp(isDebug,"y")){\
        fprintf(stderr, __VA_ARGS__);\
    }\
}while(0)

int main(){
    int character;
    //char message[255];
    while(!feof(stdin)){
        character = fgetc(stdin);
        fputc(character, stdout);
        //sprintf(message, "Error character %c \n", character);
        printDebug("Error character %c \n", character);
    }
    return 0;
}
