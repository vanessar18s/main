/*
  Vanessa Ramirez
  9-25-2026
  repeated_addition.c

  Goal: compute a*b using ONLY addition and a loop -- the way a
  child multiplies before they've memorized times tables: to
  compute 5*7, add 7 to itself 5 times (or add 5 to itself 7 times).

  This works for POSITIVE whole numbers only for now. Day 8 extends
  this to handle negative numbers too.

  Compile with:
      cc repeated_addition.c
  Run with:
      ./a.out
*/

#include <stdio.h>

int main()
{
    double a, b, i, product;

    // ==== Example 1: a fixed case, 5 * 7 ====
    a = 5;
    b = 7;

    // TODO 1: declare/set up i and product before the loop.
    //         i should start at 1 (we're counting how many times
    //         we've added so far). product should start at 0.

    i = 1;
    product = 0;


    // TODO 2: write a while loop that adds "a" to "product",
    //         exactly "b" times:

    while (i <=b) {
      product = product + a;
      i = i + 1;
      // printf("%.0lf", product);
      // printf("%.0lf", i);
    }

    //   while (i <= b) {
    //       product = product + a;
    //       i = i + 1;
    //   }


    printf("%.0lf * %.0lf = %.0lf\n", a, b, product);


    // ==== Example 2: generalized -- read a and b from the user ====
    // TODO 3: prompt for and read a, then b


    printf("Enter a value for a: ");
    scanf("%lf", &a);

    printf("Enter a value for b: ");
    scanf("%lf", &b);

    // TODO 4: repeat the same loop pattern as above, using the
    //         new a and b the user typed in. Don't forget to reset
    //         i and product first!

    // Reset i and product
    i = 1;
    product = 0;
    
    while (i <= b) {
      product = product + a;
      i = i + 1;
      // printf("%.0lf", product);
      // printf("%.0lf", i);
    }
    
    // Output the final result
    printf("%.0lf * %.0lf = %.0lf\n", a, b, product);

    return 0;
}
