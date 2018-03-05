#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "words.h"

/* Add function signatures here */

int main(int argc, char **argv) {
  /* Start your code here */
  //getchar();

  char *a = NULL;
  char *words = NULL;
  int read;
  size_t len = 100; //set this according size of file.

  printf("Enter your string: \n");
  read = getline(&a, &len, stdin);

  if (read)
  {
    char *p;
    p = strtok(a, ",:;. ?¿!¡");
    while (p != NULL)
    {
      printf("Word added: %s\n", p);
      //words.Add(p); TODO make a struct in order to add and remove words
      //search this word in the array a with function strstr(), if found, remove and counter++.
      p = strtok(NULL, ",:");
    }
  }

  return 0;
}
