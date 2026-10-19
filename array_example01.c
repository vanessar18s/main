/*
  Vanessa Ramirez
  10/19/2026
  array_example01.c

  Goal: see the basics of an array. An array is a row of numbered
  boxes that all hold the same kind of value. Here, y has 5 boxes
  of type double. The boxes are numbered 0, 1, 2, 3, 4. There is
  no box number 5.

  TODO:
    1. Declare one double named x and an array of 5 doubles named y.
    2. Set x to 24.7.
    3. Set y[0] to 13.9, y[1] to 22.6, y[2] to 14.4 and y[3] to -7.5.
    4. Set y[4] to x + y[2]. (An array slot can be used in a
       calculation just like any other variable.)
    5. Print x, then y[1], then y[4], each on its own line.

  Compile with:
      cc array_example01.c
  Run with:
      ./a.out

  Expected output:
      24.700000
      22.600000
      39.100000
*/

// NOTES
// sixe there is 7 boxes but theres 6 index counting from 0
// element is the number stored in the index, index is the postion (boxes)
// access the elements by using array[index]==element
// is n is the size, then the last index is n -1

#include <stdio.h>

int main()
{
  // TODO:
  //  1. Declare one double named x and an array of 5 doubles named y.
  //  2. Set x to 24.7.
  //  3. Set y[0] to 13.9, y[1] to 22.6, y[2] to 14.4 and y[3] to -7.5.
  //  4. Set y[4] to x + y[2]. (An array slot can be used in a
  //     calculation just like any other variable.)
  //  5. Print x, then y[1], then y[4], each on its own line.

  // TODO 1 Declare one double named x and an array of 5 doubles named y.
  double x;
  double y[5];

  // TODO 2 Set x to 24.7

  x = 24.7;

  // TODO 3 Set y[0] to 13.9, y[1] to 22.6, y[2] to 14.4 and y[3] to -7.5.
  
  y[0] = 13.9;
  y[1] = 22.6;
  y[2] = 14.4;
  y[3] = -7.5;
  y[4] = 6.0;

  // TODO 4 Set y[4] to x + y[2]. (An array slot can be used in a
  
  y[4] = x + y[2];
  printf("Update y[4]: %lf\n", y[4]);

  // TODO 5 Print x, then y[1], then y[4], each on its own line.
  printf("x: %lf\n");
  printf("y[0]: %lf\n", y[0]);
  printf("y[1]: %lf\n", y[1]);
  printf("y[2]: %lf\n", y[2]);
  printf("y[3]: %lf\n", y[3]);
  printf("y[4]: %lf\n", y[4]);
    
  return 0;
}
