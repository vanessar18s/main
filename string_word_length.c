/*
  Vanessa Ramirez
  10/30/2026
  word_length.c

  Goal: read a word and count how many characters it has. The
  characters of a word sit in an array, followed by a '\0'. So the
  length is the number of boxes before the first '\0'.

  TODO:
    1. Declare a char array w of 100 and an int i.
    2. Read a word into w with scanf("%s", w).
    3. Set i to 0. While w[i] is not '\0', add 1 to i.
    4. When the loop ends, i is the length. Print it in the
       format shown below.

  Compile with:
      cc word_length.c
  Run with:
      ./a.out

  Test case:
      hello  ->  length = 5
*/

#include <stdio.h>

int main()
{
  char w[100];

  int i;

  printf("Enter a word: ");
  scanf("%s", w);

  i = 0;

  while (w[i] != '\0') {
    ++i;
  }

  printf("%s -> %d\n", word, i);

  return 0;
}
