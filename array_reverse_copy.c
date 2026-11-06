/*
  Vanessa Ramirez
  reverse_copy.c

  Goal: read a word and build a SECOND array holding the word backward, then
  print it. (Same idea as Lab 15: a new array, and a new '\0'.)

  TODO:
    1. Declare char arrays w and r of 100, and ints len, i and j.
    2. Read the word with scanf("%s", w).
    3. Find the length: set len to 0. While w[len] is not '\0', add 1
       to len.
    4. Set i to len - 1 and j to 0. While i is at least 0: copy w[i]
       into r[j], then subtract 1 from i and add 1 to j.
    5. Put '\0' in r[j] so the new word has an end.
    6. Print r with %s.

  Compile with:
      cc reverse_copy.c
  Run with:
      ./a.out

  Test cases:
      hello    ->  olleh
      a        ->  a
      racecar  ->  racecar
      ab       ->  ba
*/

#include <stdio.h>

int main()
{
  char word[100];
  char reverse[100];
  
  int len;
  int i;
  int j;

  printf("Enter a word: ");
  scanf("%s", word);

  len = 0;

  while (word[len] != '\0') {
    ++len;
  }

  i = len - 1;
  j = 0;

  while (i >= 0) {
    reverse[j] = word[i];
    --i;
    ++j;
  }

  reverse[j] = '\0';

  printf("%s\n", reverse);

  return 0;
}
