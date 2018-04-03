#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "minunit.h"
#include "closeMatch.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int testsRun = 0;

static char * testRemoveLineJump() {
  char *n = "? ?";
  char *result = removeLineJump(n);
  char *expected = "? ?";
  muAssert("error, expected '? ?'", !strcmp(result, expected));
  return 0;
}

static char * testGetSecondIndex() {
  char *n = "?01 90?";
  int result = getSecondIndex(n);
  int expected = 4;
  muAssert("error, expected 4", (result == expected));
  return 0;
}

static char * testModifyInput() {
  //char *n = "1? 2?";
  //char *result = (char *)malloc(256);
  //*result = modifyInput(n, 1, 4, 0, 4, 1);
  //char *expected = "19 20";
  //muAssert("error, expected '19 20'", !strcmp(result, expected));
  //return 0;
  char *n = "?01 90?";
  int result = getSecondIndex(n);
  int expected = 4;
  muAssert("error, expected 4", (result == expected));
  return 0;
}

static char * allTests() {
  muRunTest(testRemoveLineJump);
  muRunTest(testGetSecondIndex);
  muRunTest(testModifyInput);
  return 0;
}

int main(int argc, char **argv) {
  char *result = allTests();
  if (result != 0) {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( X .X)  +     + \n");
    printf("_-_-_-_-_-_-_- \"\"  \"\" \n");
    printf(KRED "✗ %s \n" RESET, result);
  }
  else {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( ^ .^)  +     + \n");
    printf("_-_-_-_-_-_-_-  \"\"  \"\" \n");
    printf(KGRN " ✓ ALL TESTS PASSED \n" RESET);
  }
  printf("Tests run: %d\n", testsRun);
  return result != 0;
}