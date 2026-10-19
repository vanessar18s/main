/*
  Vanessa Ramirez
  10/19/2026
  first_occurrences.c

  Goal: read a sequence of non-negative numbers that ends with a
  negative number. (ANY negative number stops the sequence, and the
  negative number is not part of it.) The very first number is
  special -- count how many times THAT value appears anywhere in
  the sequence (including itself).

  Compile with:
      cc first_occurrences.c
  Run with:
      ./a.out

  Test cases:
      5 3 5 5 2 5 -1  ->  The first number (5) occurs 4 times.
      7 1 7 -4        ->  The first number (7) occurs 2 times.
      -1              ->  No numbers.
*/

#include <stdio.h>

int main()
{
  double first = 0;
  double user_input = 0;
  double count = 0;

  printf("Enter a sequence of non-negtive numbers (or negative number to quit): ");
  scanf("%lf", &user_input);

    if (user_input >= 0) {
      while (user_input >= 0) {
	if (user_input == first) { 
	  count = count + 1;
	}
	scanf("%lf", &user_input);
      }
      
      printf("The first number (%.lf) occurs %.0lf times\n", first, count);
    } else {
      printf("No numbers\n");
    }

  return 0;
}
