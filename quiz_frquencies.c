/*
  Vanessa Ramirez
  10/23/2026
  quiz_frequencies.c

  Goal: a quiz was given where every score is 0, 1, 2 or 3. Read the
  scores (they end with a negative number, which is not a score) and
  print how many times each score occurred. This version uses four
  separate counters, one per possible score. Compare it with the
  next demo, where an array replaces them.

  TODO:
    1. Declare ints for the score x and four counters a, b, c, d.
    2. Set all four counters to 0 before reading anything.
    3. Read a score. While it is not negative, add 1 to the counter
       for that score (0 -> a, 1 -> b, 2 -> c, 3 -> d), then read the
       next score at the bottom of the loop.
    4. Print the four counts, one per line, in the format shown
       below.

  Compile with:
      cc quiz_frequencies.c
  Run with:
      ./a.out 

  Test case (quiz_frequencies.in1):
      3 3 2 2 3 1 0 0 2 2 2 3 1 1 1 3 3 2 2 2 -1
  Expected output:
      The number of quizes that had a score of 0 is 2
      The number of quizes that had a score of 1 is 4
      The number of quizes that had a score of 2 is 8
      The number of quizes that had a score of 3 is 6
*/

#include <stdio.h>

int main()
{
  // TODO 1 Declare ints for the score x and four counters a, b, c, d.

  int x;
  int a, b, c, d;
  
  // TODO 2 Set all four counters to 0 before reading anything.

  a = 0;
  b = 0;
  c = 0;
  d = 0;
  
  // TODO 3 Read a score. While it is not negative, add 1 to the counter
  // for that score (0 -> a, 1 -> b, 2 -> c, 3 -> d), then read the
  // next score at the bottom of the loop.

  printf("Enter a quiz score (or negative to quit: ");
  scanf("%d", &x);

  while (x >= 0) {
    if (x == 0) {
      a = a + 1;
    } else if (x == 1) {
      b = b + 1;
    } else if (x == 2) {
      c = c + 1;
    } else if (x == 3) {
      d = d + 1;
  } else {
    printf("Invalid score, Enter 0, 1, 2, or 3");
  }
    printf("Enter a quiz score (or negative to quit: ");
    scanf("%d". &x);
  }

  // TODO 4 Print the four counts, one per line, in the format shown
  // below.

  printf("The number of quizes that had a score of 0 is %d\n", a);
  printf("The number of quizes that had a score of 1 is %d\n", b);
  printf("The number of quizes that had a score of 2 is %d\n", c);
  printf("The number of quizes that had a score of 3 is %d\n", d);
  
  return 0;
}
