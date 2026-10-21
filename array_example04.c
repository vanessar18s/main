/*
  Vanssa Ramirez
  10/21/2026
  array_example04.c

  Goal: fix Demo 3. The counter must be an int. Then use one loop
  to fill every box of the array, and a second loop to print
  every box.

  TODO:
    1. Declare an array of 100 doubles named v and an int named i.
    2. Set i to 0. While i is less than 100, store 17.3 in v[i],
       then add 1 to i.
    3. Set i back to 0. (The first loop left it at 100.)
    4. While i is less than 100, print i and v[i] on one line,
       then add 1 to i. Use %d for the int i and %lf for the
       double v[i], in the same printf.

  Compile with:
      cc array_example04.c
  Run with:
      ./a.out

  Expected output (100 lines):
      0 : 17.300000
      1 : 17.300000
      ...
      99 : 17.300000
*/

#include <stdio.>

int main()
{
  // TODO 1 Declare an array of 100 doubles named v and an int named i.

  double v[100];
  int i;
  
  // TODO 2 Set i to 0. While i is less than 100, store 0 in v[i],
  // then add 1 to i.

  i = 0;

  while (i < 100) {
    v[i] = 0;
    i = i + 1;
  }

  // TODO 3 Set i back to 0. (The first loop left it at 100.)

  i = 0;
  
  // TODO 4 While i is less than 100, print i and v[i] on one line,
  // then add 1 to i. Use %d for the int i and %lf for the
  // double v[i], in the same printf.

  while (i < 100) {
    printf("%d: %lf\n", i, v[i]);
    i = i + 1;
  }

  return 0;
}
