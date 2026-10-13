/*
  Vanessa Ramirez
  practice_sentinel_1_count.c
  Day: sentinel-loop practice, Problem 1 -- SOLUTION

  Read non-negative numbers until a negative number is typed.
  Print how many numbers were typed (not counting the negative one).

  Compile with:  cc -Wall -Wextra practice_sentinel_1_count.c
*/

#include <stdio.h>

int main()
{
  double number = 0;
  double count = 0;
  double sum = 0;

  printf("Enter a non-negative number (negative numbers will make the code stop): ");
  scanf("%lf", &number);

  while (number >= 0) {
    count = count + 1;
    sum = sum + number;
    printf("Enter another non-negative number: ");
    scanf("%lf", &number);
  }

  printf("You've enetered %.0lf non-negative numbers\n", count);
   
  return 0;
}
