/*
  Vanessa Ramirez
  10-06-20026
  CS-171
  
  x, count, and total are all double variables. Answer on paper; do not run the
  code.

*/

#include <stdio.h>

int main()
{
  scanf("%lf", &x);
  count = 0; // how many seperate inoput numbers are greateer then 10
  total = 0; // the sum (addition) of the numbers that are greater then 10

  // while x does not equal to 0 enter the loop
  while (x != 0) {
    if (x > 10) {
      count = count + 1; // goes up by 1
      total = total + x; // adds x
    }
    scanf("%lf", &x);
  }
  printf("%.0lf %.0lf\n", count, total);
 
  return 0;
}

/*
  (a) What does the program print if the input is 5 12 8 20 15 0?

   x = 5

   while (5 != 0) -> enters the loop
   if (5 > 10 ) -> Not greater then we stop it from going futher
   count and total is still 0

   x = 12

   while (12 != 0) -> enters the loop
   if (12 > 10) -> keep going
   count = 1
   total = 12

   x = 8

   while (8 != 0) -> enters the loop
   if (8 > 10) -> Not greater then we stop it from goiung further
   count = 1
   total = 12

   x = 20

    while (20 != 0) -> Enters the loop
    if (20 > 10) -> keep going
    count = 2
    total = 32

    x = 15

    while (15 != 0) -> eneters the loop
    if (15 > 10) -> keep going
    count = 3
    total = 47

    x = 0

    while (0 != 0) -> Does not eneter the loop, it stops
   
  
  (b) What does it print if the input is just 0?

  it stop the loop it doesnt run
  
  (c) Suppose the last line is changed to print total / count instead. Give an input for
  which that goes wrong, and explain why.

  Input: 0. The loop does not run, so count stays 0. The program tries to divide by 0 with total / count, which causes an error.
*/
