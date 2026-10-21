/*
  Vanessa Ramirez
  10/21/2026
  array_example03.c

  Goal: fill an array with a loop. This version is MEANT to fail to
  compile. The counter i is a double, and an array subscript must
  be a whole number (an int).

  TODO:
    1. Declare an array of 100 doubles named array and a double named i.
    2. Set i to 0.
    3. While i is less than 100, store 0 in v[i], then add 1
       to i.
    4. Try to compile it. Read the error message.

  Compile with:
      cc array_example03.c
  Run with:
      ./a.out

  Expected result:
      It does not compile. The error is
      "array subscript is not an integer".
      Demo 4 fixes it.
*/

#include <stdio.h>

int main()
{
  // TODO 1 Declare an array of 100 doubles named array and a double named i.

  double array[100];
  double i;
  
  // TODO 2 Set i to 0.

  i = 0;

  // TODO 3  While i is less than 100, store 0 in array[i], then add 1
  // to i.

  while (i < 100) {
    array[i] = 0;
    i = i + 1;
  }

  // TODO 4 Try to compile it. Read the error message.

  return 0;
}
