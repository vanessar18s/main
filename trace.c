/*
  trace.c

  Goal: predict what this program prints BEFORE you run it. Write
  your answers on paper.

  TODO:
    1. Answer (a): what does the program print?
    2. Answer (b): does main's x change? Why or why not?
    3. Compile and run to check your answers.

  Compile with:
      cc trace.c
  Run with:
      ./a.out
*/
#include <stdio.h>

double f(double a, double b)
{
    double t;
    t = a - b;
    return t * t;
}

int main()
{
    double x, y, z;

    x = 1;
    y = 4;
    z = f(x, y) + f(y, x);
    printf("%.0lf %.0lf %.0lf\n", x, y, z);
}

/*
  a. if t = x - y then t = 1 - 4 = -3 // -3 * -3 = 9

     if t = y - x then t = 4 - 1 = 3 // 3 * 3 = 9

     f(1, 4) + f(4, 1) = 18
     f(x, y) + f(y, x)

     printf

     x = 1

     y = 4

     z = 18

  b. No, because we just declared it, we didnt use an & that allows to change the variable
   a copy is being passed in the function and unless we assign it, it will chnage the value.
*/
