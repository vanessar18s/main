/*
  concatenation.c

  Goal: read two words and build a new word that is the first
  followed by the second, with no string library (no strcat).

  TODO:
    1. Declare char arrays w1 and w2 of 100, and result of 200.
       Declare ints i and j.
    2. Read both words with scanf("%s %s", w1, w2).
    3. Set i to 0. While w1[i] is not '\0', copy w1[i] into
       result[i], then add 1 to i.
    4. Set j to 0. While w2[j] is not '\0', copy w2[j] into
       result[i], then add 1 to i AND add 1 to j. (i keeps
       counting where w1 left off; j starts over at 0.)
    5. Put '\0' in result[i] so the new string has an end.
    6. Print result with %s.

  Compile with:
      cc concatenation.c
  Run with:
      ./a.out

  Test case:
      hello world  ->  helloworld
*/

#include <stdio.h>

int main()
{
  char w1[100];
  char w2[100];
  char result[200];

  int i;
  int j;

  printf("Enter two words: ");
  scanf("%s %s", w1, w2);

  i = 0;

  while (w1[i] != '\0') {
    result[i] = w1[i];
    ++i;
  }

  // printf("The result[i] is currently: %s\n ", result);

  j = 0;

  while (w2[j] != '\0') {
    result[i] = w2[j];
    ++i;
    ++j;
  }

  result[i] = '\0';

  printf("%s\n", result);

  return 0;
}
