/*
  Vanessa Ramirez
  sentinel_sum_over_10.c

  Read non-negative numbers until a negative number is typed.
  Print the sum of the numbers that are greater than 10.

  Compile with:  cc sentinel_sum_over_10.c
*/

#include <stdio.h>

int main()
{
  double number = 0;
  double count = 0;
  double sum = 0;

  printf("Enter non-negative numbers (any negative number will stop the loop): ");
  scanf("%lf", &number);

  while (number >= 0) {
      if (number > 10) {
	count = count + 1;
	sum = sum + number;
      }
      printf("Enter another non-negative number: ");
      scanf("%lf", &number);
  }

  printf("The sum of the numbers greater then 10: %.0lf\n", sum);
  
  return 0;
}
