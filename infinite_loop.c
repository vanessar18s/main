/*
  Vanessa Ramirez
  CS-171
  09-23-2026
  infinite_loop.c
  BUGGY VERSION (show this one first!)

  This loop is supposed to count from 1 to 5. It never stops.

  RUN THIS LIVE IN CLASS, then press Ctrl+C to stop it once
  everyone has seen numbers scrolling forever.

  Compile with:
      cc loop_demo.c
  Run with:
      ./a.out
  Stop it with:
      Ctrl+C
*/

#include <stdio.h>

int main()
{
    double i, n;

    n = 5;
    i = 1;

    // BUG: there is no "i = i + 1" anywhere in this loop!
    // The condition (i <= n) is checked every time, but i NEVER
    // CHANGES, so it is true forever.
    while (i <= n) {
        printf("%.0lf ", i);

	i = i + 1;
    }

    printf("\n");

    return 0;
}
