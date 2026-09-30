/*
  Vanessa Ramirez
  CS-171
  09-30-2026
  count_neg_pos.c

  Goal: read a sequence of numbers terminated by a sentinel of 0,
  and count how many were negative and how many were positive
  (0 itself doesn't count as either -- it's just the terminator).

  Compile with:
      cc count_neg_pos.c
  Run with:
      ./a.out

  Test case:
      5 -3 2 -1 -7 4 0  ->  negatives=3 positives=3
*/

#include <stdio.h>
#include <math.h>

int main()
{
  double n = 0;
  double pos = 0;
  double neg = 0;
  double even = 0;
  double odd = 0;

  printf("Enter a value for n:");
  scanf("%lf", &n);
  
  while (n != 0) {
    // printf("Still in while-loop\n ");
    if (n > 0) {
      // Count the number of positive
      pos = pos + 1;
    }
    if (n < 0) {
      // Count the number of negative
      neg = neg + 1;
    }
    if (fmod(n, 2) == 0) {
        // Count the number of even numbers
        even = even + 1;
    }
    else {
        // Count the number of odd numbers
        odd = odd + 1;
    }
    printf("Enter a value for n: ");
    scanf("%lf", &n);
  }

  // printf("Left while-loop\n")
  
  //Bonus: count the numbers of even and odd numbers
  
  return 0;
}
