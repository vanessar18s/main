/*
  Vanessa Ramirez
  CS-171
  10-02-2026
  lab7_power.c
  
  Compute x^n for any x and any integer n (positive, negative,
  or zero) WITHOUT using the math library's pow(). Print
  "undefined" for degenerate cases instead of nan/inf.
  
  Compile with:
      cc lab7_power.c
  Run with:
      ./a.out
      
  Test cases:
  x=10, n=4 -> 10000.000000
  x=-2.5, n=5 -> -97.656250
  x=0, n=0 -> undefined
  x=2, n=-3 -> 0.125000
  x=0, n=-3 -> undefined
*/

#include <stdio.h>

int main()
{

  // Declare x and n
  // x is the number and n is the exponent
  // example: x-> 4 n-> 2 = 4²
  double x;
  int n;

  // Get x and n from the user
  printf("Enter x: ");
  scanf("%lf", &x);

  printf("Enter n: ");
  scanf("%d", &n);

  // If x is 0 and n is 0 or negative, print undefined
  if (x == 0 && n <= 0) {
    printf("undefined\n");
    // return 0 stops the program so it doesn't
    // continue running the rest of the code
    return 0;
  }

  if (n < 0) {
    x = 1 / x; // changes x to its reciprocal
    n = -n; // changes n from negative to positive
  }

  
  double result = 1; // It will be multiplied by x
  int i = 1; // Keeps track of the number of times the loop runs

  while (i <= n) {
    // Multiply the previous result by x, n times to calculate the power
    result = result * x; 
    i = i + 1;           
  }

  // Print the final result with 6 decimal places
  printf("%.6lf\n", result);

  return 0;
}
