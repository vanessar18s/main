/*
  (put your name here)
  average.c

  Goal: read a sequence of non-negative numbers into an array, then find the 
  average of the numbers in the array and print it. The average is the sum divided 
  by how many numbers there are.

  TODO:
    1. Declare a double array v of 1000, a double x, and ints n and i.
    2. Set n to 0. Read a number into x. While x is not negative,
       store it in v[n], add 1 to n, and read the next number at
       the bottom of the loop. (ANY negative number stops it.)
    3. Declare doubles named total and average. Set total to 0.
    4. Set i to 0. While i is less than n, add v[i] to total,
       then add 1 to i.
    5. Set average to total divided by n, and print it in the
       format shown below.

  Compile with:
      cc average.c
  Run with:
      ./a.out

  Assume at least one number is typed before the negative number.

  Test cases:
      4 8 15 16 23 42 -1  ->  The average is 18.000000
      2.5 7.5 -4          ->  The average is 5.000000
      9 -2                ->  The average is 9.000000
*/

#include <stdio.h>

int main()
{
  // Variables
  double v[1000];
  double x;
  double total;
  double average;

  int n;
  int i;

  // Initialize
  n = 0;
  total = 0;
  i = 0;

  printf("Enter a non-negative number (or a negative number to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    v[n] = x;
    ++n;
    scanf("%lf", &x);
  }

  while (i < n) {
    total = total + v[i];
    ++i;
  }

  average = total / n;

  printf("The average is %.6lf\n", average);

  return 0;
}
