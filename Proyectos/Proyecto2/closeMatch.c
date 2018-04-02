#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "closeMatch.h"

char *removeLineJump(char *input)
{
  if ((strlen(input) > 0) && (input[strlen(input) - 1] == '\n'))
    input[strlen(input) - 1] = '\0';
  return input;
}

int getSecondIndex(char *input)
{
  //As the strings have the same lenght:
  return strlen(input) / 2 + 1;
}

char *modifyInput(char *input, int indexC, int indexJ, int equalNum, int greatestNum, int smallestNum)
{
  if (input[indexC] == '?' && input[indexJ] != '?')
  {
    if (input[indexJ - 1] != ' ')
    { //if there are digits before this
      if (equalNum)
      {
        input[indexC] = input[indexJ];
      }
      else if (greatestNum > smallestNum)
      { //the number J is the greatest
        input[indexC] = '9';
      }
      else if (greatestNum < smallestNum)
      { //the number C is the greatest
        input[indexC] = '0';
      }
    }
    else
      input[indexC] = input[indexJ];
  }
  else if (input[indexJ] == '?' && input[indexC] != '?')
  {
    if (input[indexJ - 1] != ' ')
    { //if there are digits before this
      if (equalNum)
      {
        input[indexJ] = input[indexC];
      }
      else if (greatestNum > smallestNum)
      { //the number J is the greatest
        input[indexJ] = '0';
      }
      else if (greatestNum < smallestNum)
      { //the number C is the greatest
        input[indexJ] = '9';
      }
    }
    else
      input[indexJ] = input[indexC];
  }
  else if (input[indexJ] == '?' && input[indexC] == '?')
  {
    if (input[indexJ - 1] != ' ')
    { //if there are digits before this
      if (equalNum)
      {
        input[indexC] = '0';
        input[indexJ] = '0';
      }
      else if (greatestNum > smallestNum)
      { //the number J is the greatest
        input[indexJ] = '0';
        input[indexC] = '9';
      }
      else if (greatestNum < smallestNum)
      { //the number C is the greatest
        input[indexJ] = '9';
        input[indexC] = '0';
      }
    }
    else
    {
      input[indexC] = '0';
      input[indexJ] = '0';
    }
  }
  return input;
}
