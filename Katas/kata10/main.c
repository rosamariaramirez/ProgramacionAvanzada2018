#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utf8.h"
#define MAX 1000

/* Add function signatures here */

//int isValidUtf8(int* numbers);

int main(int argc, char *argv[]) {

  //limit our input
  int lenghtOfArray = argc;
  if(lenghtOfArray > MAX-1){
    printf("Please enter 1000 integers or less. \n");
    return 0;
  }

  int x[MAX];
  int i = 1, j = 0;
  
  //assign values from stream to x
  while(argv[i] != NULL){
    if(atoi(argv[i]) != ' '){
      x[j] = atoi(argv[i]);
      //printf("x[%d]: %d\n", i, x[j]);
      j++;
    }
    i++;
  }

  //printf("arraylength: %d\n", i);
  //check if is valid utf-8 encoding
  int valid = isValidUtf8(x);
  if(valid){
    printf("true\n");
  }else{
    printf("false\n");
  }

  return 0;
}
