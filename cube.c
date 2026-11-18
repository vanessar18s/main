/*
  cube.c

  Goal: write a function cube that returns a number multiplied by itself
  three times, and use it on a number typed in.

  TODO:
    1. Above main, write a function named cube: return type double,
       one parameter double x. Declare a double result, set it to x *
       x * x, and return it.
    2. In main, declare a double x. Read a number into it with
       scanf("%lf", &x).
    3. Print cube(x) in the format shown below.

  Compile with:
      cc cube.c
  Run with:
      ./a.out

  Test cases:
      3    ->  cube = 27.000000
      0.5  ->  cube = 0.125000
      0    ->  cube = 0.000000
      10   ->  cube = 1000.000000
*/

#include <stdio.h>

int cube(double x) {
  int result;
  result = x * x * x;

  return result;
}

int main()
{
  // declare variable and initialize
  double x = 0;

  // get user input
  printf("Enter a number: ");
  scanf("%lf", &x);

  // print output
  printf("cube = %lf\n", x);

  return 0;
}
