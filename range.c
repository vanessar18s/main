/*
  Vanessa Ramirez
  CS-171
  09-30-2026
  range.c

  Goal: read a sequence of numbers terminated by -1, and compute
  the range: the largest value minus the smallest value.

  Compile with:
      cc range.c
  Run with:
      ./a.out

  Test case:
      10 20 5 30 -1  ->  range = 25.000000
*/

#include <stdio.h>

int main()
{

  double number;
  double range;
  double largest;
  double smallest;

  printf("Enter a number: ");
  scanf("%lf", &number);

  largest = number;
  smallest = number;
  
  while (number != -1) {
    if (number > largest) {
      largest = number;
    }
    if (number < smallest) {
      smallest = number;
    }
  printf("Enter a number: ");
  scanf("%lf", &number);
  }

  range = largest - smallest;
  printf("range: %lf\n", range);

  return 0;
}
