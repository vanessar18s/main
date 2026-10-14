/*
  Vanessa Ramirez
  sentinel_largest.c

  Read non-negative numbers until a negative number is typed.
  Print the largest number typed. If no numbers were typed, print 0.

  Because every number is at least 0, starting largest at 0 works.

  Compile with:  cc sentinel_largest.c
*/

#include <stdio.h>

int main()
{
  double number = 0;
  double largest = 0;

  printf("Enter non-negative numbers until a negative number is typed: ");
  scanf("%lf", &number);

  while (number >= 0) {
    if (number > largest) {
      largest = number;
    }
    printf("Enter another non-negative number: ");
    scanf("%lf", &number);
  }

  printf("The largest number is: %.0lf\n", largest);
  
  return 0;
}
