/*
  Vanessa Ramirez
  11/20/2026
  absolute.c

  Goal: write a function absolute that returns the absolute value of a
  number (the number without its minus sign). The number typed in may be
  negative.

  TODO:
    1. Above main, write a function named absolute: return type
       double, one parameter double x.
    2. In absolute, declare a double result. If x is less than 0, set
       result to -x. Otherwise set result to x. Then return result
       (one return statement, at the end).
    3. In main, declare a double x and read a number into it.
    4. Print absolute(x) in the format shown below.

  Compile with:
      cc absolute.c
  Run with:
      ./a.out

  Test cases:
      -3     ->  absolute = 3.000000
      4.5    ->  absolute = 4.500000
      0      ->  absolute = 0.000000
      -0.25  ->  absolute = 0.250000
*/

#include <stdio.h>

double absolute(double number) {
  double result;

  if (number < 0) {
    result = number * -1;
  } else {
    result = number;
  }

  return result;
}

int main()
{
  double number;

  printf("Enter a number: ");
  scanf("%lf", &number);

  // or you can put result instead of absolute(number)
  // result = absolute(number));
  printf("%lf\n", absolute(number));

  return 0;
}
