#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "reverse.h"

#define MAX 1000

/* Add function signatures here */


char* append(char*, char);

int main(int argc, char **argv) {
  /* Start your code here */
  int cases;
  int firstIndex, lastIndex;
  int inputSize;
  int outputIndex = 0;
  char* input = (char*) malloc(MAX);
  char* output = (char*) malloc(MAX);
  int sizeOfWord = 0;
  printf("Enter number of cases:\n");
  scanf("%d%*c", &cases);
  
  while(cases > 0){
    scanf("%[^\n]%*c", input);
    printf("%s\n", input);
    inputSize = strlen(input);
    
    //assign index values
    firstIndex = 0;
    lastIndex = inputSize - 1;
    printf("Last index %d\n", lastIndex);

    while(lastIndex != 0){
      //start reading input, starting from the final.
      int flag = 1;
      sizeOfWord = 0;
      while(flag){
        if(input[lastIndex] == ' '){
          firstIndex = lastIndex + 1;
          printf("first index: %d \n", firstIndex);
          flag = 0;
        }
        lastIndex--;
        sizeOfWord++;
      }

      int startingIndex = firstIndex;
      for(int i = 0; i < sizeOfWord ; i++){
        output = append(output, input[startingIndex]);
        printf("String concatenada: %s\n", output);
        startingIndex++;
      }
      //end reading
          printf("first index: %d \n", firstIndex);
          printf("last index: %d \n", lastIndex);
      
      break;
    }

    cases--;
  }
  return 0;
}

char* append(char* s, char c) {
        int len = strlen(s);
        s[len] = c;
        return s;
}