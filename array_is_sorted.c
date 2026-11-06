/*
  Vanessa Ramirez
  is_sorted.c

  Goal: read a sequence of non-negative numbers into an array, then decide
  whether it is in non-decreasing order (each number is at least as big as
  the one before it). Compare each box with the box just before it. This is
  the check Lab 14's two input sequences already satisfy.

  TODO:
    1. Declare a double array v of 1000, a double x, and ints n, i and
       sorted.
    2. Set n to 0. Read a number into x. While x is not negative,
       store it in v[n], add 1 to n, and read the next number at the
       bottom of the loop. (ANY negative number stops it.)
    3. Set sorted to 1. Set i to 1 (box 0 has nothing before it).
    4. While i is less than n: if v[i] is less than v[i - 1], set
       sorted to 0. Then add 1 to i.
    5. If sorted is 1, print "Sorted". Otherwise print "Not sorted".

  Compile with:
      cc is_sorted.c
  Run with:
      ./a.out

  Assume at least one number is typed before the negative number.

  Test cases:
      1 2 2 5 9 -1   ->  Sorted
      3 8 5 -4        ->  Not sorted
      7 -2            ->  Sorted           (one number)
      2 1 -1          ->  Not sorted
*/

#include <stdio.h>

int main()
{
  double v[1000];
  double x;

  int n;
  int i;
  int sorted;

  n = 0;
  
  printf("Enter non-negative numbers (or a negative to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    v[n] = x;
    ++n;
    scanf("%lf", &x);
  }

  sorted = 1;
  i = 1;

  while (i < n) {
    if (v[i] < v[i - 1]) {
      sorted = 0;
    }
    ++i;
  }

  if (sorted == 1) {
    printf("Sorted\n");
  } else {
    printf("Not sorted\n");
  }

  return 0;
}
