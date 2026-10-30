/*
  Vanessa Ramirez
  largest.c

  Goal: read a sequence of non-negative numbers into an array, then find the 
  largest number in the array and print it. Start by assuming the first box is the 
  largest so far, then look at every other box.

  TODO:
    1. Declare a double array v of 1000, a double x, and ints n and i.
    2. Set n to 0. Read a number into x. While x is not negative,
       store it in v[n], add 1 to n, and read the next number at
       the bottom of the loop. (ANY negative number stops it.)
    3. Declare a double named largest. Set it to v[0].
    4. Set i to 1 (box 0 is already in largest). While i is less
       than n, if v[i] is greater than largest, set largest to
       v[i]. Then add 1 to i.
    5. Print the largest in the format shown below.

  Compile with:
      cc largest.c
  Run with:
      ./a.out

  Assume at least one number is typed before the negative number.

  Test cases:
      4 8 15 16 23 42 -1  ->  The largest is 42.000000
      42 8 15 -4          ->  The largest is 42.000000
      9 -2                ->  The largest is 9.000000
*/

#include <stdio.h>

int main()
{
  double v[1000];
  double x;

  int n = 0;
  int i;

  printf("Enter a non-negative number (or a negative number to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    v[n] = x;
    ++n;
    scanf("%lf", &x);
  }

  double largest = v[0];

  i = 1;

  while (i < n) {
    if (v[i] > largest) {
	largest = v[i];
      }
    ++i;
  }

  printf("The largest is %.6lf\n", largest);
      
  return 0;
}
