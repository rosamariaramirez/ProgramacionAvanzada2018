#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utf8.h"


int isValidUtf8(int* numbers, int size){

  int octets = 0;
  
  for(int i = 0; i < size; i++){
    if(numbers[i] >= 0 && numbers[i] <= 127 && octets == 0){
      octets = 0;
    }else if(numbers[i] >= 128 && numbers[i] <= 191){
      octets--;
    }else if(numbers[i] >= 192 && numbers[i] <= 223 && octets == 0){
      octets = 1;
    }else if(numbers[i] >= 224 && numbers[i] <= 239 && octets == 0){
      octets = 2;
    }else if(numbers[i] >= 240 && numbers[i] <= 247 && octets == 0){
      octets = 3;
    }else{
      return 0;
    }
  }

  return !octets;

}