/*
  four_identical.c

  Goal: read four numbers and determine whether all four are
  identical (all equal to each other).

  Compile with:
      cc day6_01_four_identical.c
  Run with:
      ./a.out

  Test cases:
      5 5 5 5  -> identical
      5 5 5 6  -> not identical
*/

#include <stdio.h>

int main()
{
    // TODO 1: declare double variables a, b, c, d

    double a;
    double b;
    double c;
    double d;
  
    // TODO 2: prompt for and read all four numbers

    printf("Enter in four numbers:" );
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // TODO 3: write an if/else using && to check that a==b AND
    //         b==c AND c==d. If all three of those comparisons are
    //         true, all four numbers must be equal to each other.

    if ( a == b && b == c && c == d) {
      printf("All four numbers are equal to each other\n");
    } else {
      printf("All four numbers are NOT equal to each other\n");
    }
      
    return 0;
}
