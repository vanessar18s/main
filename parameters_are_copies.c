/*
  Vanessa Ramirez
  11/18/2026
  parameters_are_copies.c

  Goal: see that a function's parameter is a COPY of the value it was called
  with. Changing the parameter inside the function does not change the
  caller's variable.

  TODO:
    1. Above main, write a function named twice. Its return type is
       int, and it has one parameter, int n. In its body, set n to n *
       2 and return n.
    2. In main, declare ints x and y. Set x to 5.
    3. BEFORE you run it, predict: after y = twice(x), what are x and
       y?
    4. Set y to twice(x). Print x and y in the first format shown
       below.
    5. Then set x to twice(x) and print x in the second format. (To
       change x you must store the returned value back into it.)

  Compile with:
      cc parameters_are_copies.c
  Run with:
      ./a.out

  Test cases:
      x = 5, y = 10
      x after x = twice(x): 10
*/

#include <stdio.h>

int twice(int number) {
  int result;
  result = number * 2;

  return result;
}

int main()
{
  // Variables
  int x;
  int y;

  x = 5;

  y = twice(x);

  // The value of x doesnt change, its just doubling y
  printf("x = %d \ny = %d\n ", x ,y);

  // Change value of x
  x = twice(x);
  
  printf("\nx = %d\n" , x)
  
  return 0;
}
