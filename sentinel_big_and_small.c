/*
  sentinel_big_and_small.c

  Read non-negative numbers until a negative number is typed.
  Print how many numbers are 10 or more, then the sum of the numbers
  that are below 10, separated by a space.

  Compile with:  cc sentinel_big_and_small.c
*/

#include <stdio.h>

int main()
{
  double number = 0;
  double count = 0;
  double sum = 0;
  double flag = 1;

  printf("Enter non-negative number, until a negative number is typed: ");
  scanf("%lf", &number);

  while (number >= 0) {
    printf("Enter a non-negative number: ");
    scanf("%lf", &number);
    if (number >= 10) {
      count = count + 1;
    } else {
      sum = sum + number;
    }
  }

  printf("%.0lf\n"), count);
  
  if (flag == 1) {
    printf("%.0lf\n", sum);
  }

  printf("%.0lf\n ", largest);


  return 0;
}
