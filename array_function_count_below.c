/*
  array_function_count_below.c
  (put your name here)

  Goal: the FIRST number typed is a limit. The numbers after it, up to a
  negative number, are the sequence. Print how many numbers in the
  sequence are SMALLER than the limit. Use a function.

  TODO:
    1. Above main, write
       int count_below(double v[], int n, double limit), which returns
       how many of the first n numbers in v are smaller than limit.
    2. In main, read the limit. Then read the sequence into
       double v[100], counting it in n.
    3. Print count_below(v, n, limit) with printf("%d\n", ...);

  Compile with:
      cc array_function_count_below.c
  Run with:
      ./a.out

  Test cases:
      5 3 8 5 1 -1   ->  2
      1 4 5 6 -1     ->  0
      10 0 10 20 -2  ->  1
      4 -1           ->  0
*/

#include <stdio.h>

int count_below(double array[], int length, double limit) {
  double count = 0;
  int i = 0;
  
  while (i < length) {
    if (array[i] < limit) {
      ++count;
    }
    ++i;
  }
  
  return below;
}

int main() {

  double array[1000];
  double limit;
  double input;

  int i;
  int limit;

  printf("Enter a number: ");
  scanf("%lf", &input);

  i = 0;
  limit = 0;

  while ( ) {
  }

  printf("%d\n", count_below(array, length, limit);

  return 0;
}
