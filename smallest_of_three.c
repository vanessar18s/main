/*
  smallest_of_three.c

  Goal: write a function smaller that returns the smaller of two numbers,
  then use it twice to find the smallest of three. (Wednesday's larger,
  turned around.)

  TODO:
    1. Above main, write a function named smaller: return type double,
       two parameters double a and double b. Declare a double result.
       If a is less than b, set result to a. Otherwise set result to
       b. Return result.
    2. In main, declare doubles a, b and c, and read all three with
       scanf("%lf %lf %lf", &a, &b, &c).
    3. Print smaller(smaller(a, b), c) in the format shown below.

  Compile with:
      cc smallest_of_three.c
  Run with:
      ./a.out

  Test cases:
      3 8 5  ->  smallest = 3.000000
      9 2 7  ->  smallest = 2.000000
      4 4 4  ->  smallest = 4.000000
      5 1 1  ->  smallest = 1.000000
*/

#include <stdio.h>

double smaller(double x, double y) {
  double smallest;

  if (x < y) {
    smallest = x;
  } else {
    smallest = y;
  }

  return smallest;
  
}
int main()
{
  double x;
  double y;
  double z;

  printf("Enter three numbers: ");
  scanf("%lf &lf %lf", &x, &y, &z);

  printf("smallest = %lf\n", smaller(smaller(x, y), z);

  return 0;
}
