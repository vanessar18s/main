/*
  Vanessa Ramirez
  10-06-2026
  CS-171
*/

# include <stdio.h>

int main()
{
  /*
    a = the number we are dividing
    b = the number we are dividing by
    quotient = counts how many times we are succefully subtract b
    remainder = stores what is left after the loop
  */
  
  double a;
  double b;
  double quotient = 0;
  double remainder;

  printf("Enter a value for a: ");
  scanf("%lf", &a);

  printf("Enter a value for b: ");
  scanf("%lf", &b);

  // Can I still subtract b from a, without making a negative?
  // a >= b means YES
  while (a >= b) {
    // Take the current value of a, subtract b, and save the new vale back into a
    a = a - b;
    quotient = quotient + 1;
  }
  
  // when the loop stops, a is smaller than b
  // that means we cannot subtract b anymore
  // whatever is left in a is the remainder
  remainder = a;
  
  printf("quotient %.0lf, remainder %.0lf\n", quotient, remainder);
  
  return 0;
}
