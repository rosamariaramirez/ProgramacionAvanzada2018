#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "closeMatch.h"

#define MAXCASES 200
#define MINCASES 1
#define MAXINPUT 256
#define MININPUT 3

int main(int argc, char **argv)
{
  FILE *file;
  FILE *inputFile;
  inputFile = fopen("B-large-practice.in", "r"); //change large or small dataset.
  file = fopen("output.txt", "wa");

  char *input = (char *)malloc(256); //use one string instead of two.
  char T[MININPUT];
  int indexC, indexJ; //one index for each number.
  int cases = 1;
  int greatestNum = 0, smallestNum = 0, equalNum = 1;

  fscanf(inputFile, "%[^\n]", T);
  int numberT = atoi(T);

  if (!(numberT < MINCASES) && !(numberT > MAXCASES))
  {
    fgets(input, MAXINPUT, (FILE *)inputFile);
    while (cases <= numberT && fgets(input, MAXINPUT, (FILE *)inputFile) != NULL)
    {

      input = removeLineJump(input);
      indexJ = getSecondIndex(input);
      indexC = 0;

      while (input[indexC] != ' ')
      {
        input = modifyInput(input, indexC, indexJ, equalNum, greatestNum, smallestNum);
        indexC++;
        indexJ++;

        //obtain greatest one.
        if (equalNum)
        {
          if (input[indexC - 1] > input[indexJ - 1])
          {
            greatestNum = indexC; // if C is greater, greatestNum < smallestNum
            smallestNum = indexJ;
            equalNum = 0;
          }
          else if (input[indexC - 1] < input[indexJ - 1])
          {
            greatestNum = indexJ;
            smallestNum = indexC;
            equalNum = 0;
          }
        }
      }
      equalNum = 1;
      greatestNum = 0;
      smallestNum = 0;
      
      //print result
      printf("Case #%d: %s \n", cases, input);
      fprintf(file, "Case #%d: %s\r\n", cases, input);

      cases++;
    }
  }
  fclose(file);
  fclose(inputFile);
  return 0;
}

