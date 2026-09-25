/*
  Vanessa Ramirez
  09-25-2026
  tracing_variants.c

  Goal: this is NOT a "fill in the blanks" exercise like most demos
  so far. Instead, you'll trace through THREE variants of the
  summation loop from Day 8 BY HAND -- write down what you think
  each one prints BEFORE running it -- and see how a small change
  can silently break a program that still compiles and runs fine.

  All three variants below are already complete, runnable programs.
  For each one: read it carefully, write down your prediction, THEN
  uncomment it (and comment out the others) to check yourself.

  Compile with:
      cc tracing_variants.c
  Run with:
      ./a.out
*/

#include <stdio.h>

int main()
{
    double n, i, s, v;
    n = 5;

    // ==== The original, correct version (for reference) ====
    // i = 1; s = 0;
    // while (i <= n) {
    //     s = s + i;
    //     i = i + 1;
    // }
    // printf("%lf\n", s);
    // PREDICTION: ______


    // ==== Variant A ====
    // Notice this prints v, not s. And look closely at what's
    // INSIDE the loop -- is s actually being updated every pass?
    //
    // i = 1; s = 0;
    // while (i <= n) {
    //     v = s + i;
    //     i = i + 1;
    // }
    // printf("%lf\n", v);
    // PREDICTION: ______


    // ==== Variant B ====
    // The two lines inside the loop have been SWAPPED compared to
    // the original. Same starting values, same condition -- just a
    // different order.
    //
    // i = 1; s = 0;
    // while (i <= n) {
    //     i = i + 1;
    //     s = s + i;
    // }
    // printf("%lf\n", s);
    // PREDICTION: ______


    return 0;
}

/*
  CHALLENGE (discuss in class): Variant B's line order (i = i + 1
  BEFORE s = s + i) is actually useful in some situations -- but as
  written above, it gives the wrong total. Can you fix Variant B's
  OUTPUT without changing the ORDER of those two lines? You're
  allowed to change the starting value of i and/or the loop's

*/
