/*
  Vanessa Ramirez
  CS-171
  09-28-2026
  alt_sum_squares.c

  Goal: compute 1^2 - 2^2 + 3^2 - 4^2 + ... (alternating sign) up
  through n^2, for a user-provided n. There are several genuinely
  different ways to write this -- we'll look at three.

  Compile with:
      cc alt_sum_squares.c -lm
  Run with:
      ./a.out

  Test cases:
      n=1  -> 1
      n=2  -> -3
      n=3  -> 6
      n=4  -> -10
      n=5  -> 15
      n=6  -> -21
      n=10 -> -55
*/

#include <stdio.h>

int main()
{

  double n;
  double i;
  double sum;
  double sign;

  printf("Enter a value for n: ");
  scanf("%lf", &n);

  i = 1;
  sum = 0;
  sign = 1;
    
  while (i <= n) {
    // 1*1 + (-2*2) + 3*3 + (-4*4);
    sum = sum + i * i;
    i = i + 1;
  } 

  printf("%lf is the alternative sum:\n", sum);

  return 0;
}
