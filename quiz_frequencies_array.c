/*
  Vanessa Ramirez
  10/23/2026
  quiz_frequencies_array.c

  Goal: the same quiz problem as the last demo (every score is
  0, 1, 2 or 3; the scores end with a negative number, which is not
  a score), but fixed so that it uses an array instead of four
  separate counters. Box k of the array counts how many times the
  score k occurred. The score itself is the index, so the four
  if statements become one line.

  TODO:
    1. Declare ints for the score x, a counter k, and an array
       f of 4 ints. (Why 4? The indexes run from 0 to 3.)
    2. Set f[0] to f[3] to 0 with a loop. Do this before reading
       anything.
    3. Read a score. While it is not negative, add 1 to f[x], then
       read the next score at the bottom of the loop.
    4. Loop k from 0 to 3 and print each score and its count in the
       format shown below, one per line.
    5. Think about it: this works for 0 to 3. What would you change
       for scores from 0 to 100?

  Compile with:
      cc quiz_frequencies_array.c
  Run with:
      ./a.out

  Test case (quiz_frequencies.in1):
      3 3 2 2 3 1 0 0 2 2 2 3 1 1 1 3 3 2 2 2 -1
  Expected output (identical to the four-counter version):
      The number of quizes that had a score of 0 is 2
      The number of quizes that had a score of 1 is 4
      The number of quizes that had a score of 2 is 8
      The number of quizes that had a score of 3 is 6
*/

#inlude <stdio.h>

int main()
{
  // TODO 1 Declare ints for the score x, a counter k, and an array
  // f of 4 ints. (Why 4? The indexes run from 0 to 3.)

  int x;
  int k;
  int f[4];
  
  // TODO 2 Set f[0] to f[3] to 0 with a loop. Do this before reading
  // anything.

  // f[0] = 0;
  // f[1] = 0;
  // f[2] = 0;
  // f[3] = 0;
  
  scanf("%d", &x);

  k = 0;
  
  while (k < 4) {
    x[k] = 0;
    k = k + 1;
  }
  
  // TODO 3 Read a score. While it is not negative, add 1 to f[x], then
  // read the next score at the bottom of the loop.

  printf("Invalid number, enter 0, 1, 2 or 3");
  scanf("%d", &x);

  while (x >= 0) {
    if (x == 0) {
      x[0] = x[0] + 1;
    } else if (x == 1) {
      x[1] = x[1] + 1;
    } else if (x == 2) {
      x[2] = x[2] + 1;
    } else if (x == 3) {
      x[3] = x[3] + 1;
    } else {
      printf("Invalid number, enter 0, 1, 2 or 3");
      scanf("%d", &x);
    }
  }
  
  // TODO 4 Loop k from 0 to 3 and print each score and its count in the
  // format shown below, one per line.

  k = 0;
  printf("\n");

  while (k < 4) {
    printf("The number of quizzes that had a score of %d\n", k, x);
    k = k + 1;
  }

  printf("\n");
  
  // TODO 5 Think about it: this works for 0 to 3. What would you change
  // for scores from 0 to 100?

  
  
  return 0;
}
