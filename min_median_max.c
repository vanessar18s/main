/*
  Vanessa Ramirez
  CS-171
  min_median_max.c

  Goal: given three numbers, IN ANY ORDER, figure out which one is
  the minimum, which is the median (middle), and which is the
  maximum -- without using arrays or sorting functions, just if's.

  This is a genuinely new kind of problem: so far every if-statement
  we've written has answered a yes/no question. This one has to
  figure out an ORDERING among three values.

  The trick: compare pairs of variables, and let each comparison
  narrow down what you know. There are only 6 possible orderings of
  three numbers, and a tree of nested if/else statements can cover
  all 6.

  Compile with:
      cc min_median_max.c
  Run with:
      ./a.out

  Test cases:
      100 120 200  -> min=100 median=120 max=200
      100 170 200  -> min=100 median=170 max=200
      100 150 200  -> min=100 median=150 max=200
      200 100 170  -> min=100 median=170 max=200   (NOT in sorted order!)
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables a, b, c, min, median, max

    double a;
    double b;
    double c;
    double min;
    double median;
    double max;
  
    // TODO 2: prompt for and read a, b, and c

    printf("Enter in 3 values: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // TODO 3: figure out the ordering with nested ifs. Start by
    //         comparing a and b -- that splits the problem into two
    //         halves (a<=b, or b<a). Within EACH half, you then need
    //         to compare against c to finish sorting out the order.
    //         There are 6 possible orderings total; build a decision
    //         tree of nested if/else statements that covers all 6,
    //         assigning min, median, and max at each final branch.

    if (a <= b && b <= c) {
      min = a
      median= b;
      max = c;
    } else if (a <= c && c < b) {
      min = a;
      median = c;
      mac = b;
    } else if (c < a && a <= b) {
      min = c;
      median = a;
      max = b;
    } else if (b < c && c <= a ) {
      min = b;
      median = a;
      max = c;
    } else if  (b <= c && c < a) {
      min = b;
      median = c;
      max = a;
     } else if (c < b && b < a) {
      min = c;
      median = b;
      max = a;
    }
 
    // TODO 4: print min, median, and max

      printf("min: %.0lf", min);
      printf("median: %.0lf", median);
      printf("max: %.0lf", max);

    return 0;
}
