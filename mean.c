/*
  Vanessa Ramirez
  CS-171
  10-02-2026
  mean.c

  Goal: read a sequence of non-negative numbers, terminated by -1,
  and compute their mean (average).

  Compile with:
      cc mean.c
  Run with:
      ./a.out

  Test case:
      10 20 30 -1  ->  20.000000
*/

#include <stdio.h>

int main()
{
  double number;
  double mean;
  double sum;
  double count;

  sum = 0;
  count = 0;

  printf("Enter a number: ");
  scanf("%lf", &number);

  while (number != -1) {
    sum = sum + number;
    // printf("You've enter %lf: \n", number);
    // printf("You are still in the loop");
    count = count + 1;
   
    printf("Enter a number: ");
    scanf("%lf", &number);
  }

  mean = sum/count;
  printf("%lf\n", mean);
  
  return 0;
}
