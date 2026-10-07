/*
  Vanessa Ramirez
  CS-171
  10-02-2026
  lab6_nautilus.c
  
  Find the total area of a stack of n right triangles.
  The first triangle has long leg 100 and short leg 30.
  Every triangle has short leg 30. Each new triangle's long
  leg equals the HYPOTENUSE of the triangle before it.

  Compile with:
  cc lab6_nautilus.c -lm
  Run with:
  ./a.out
  
  Test cases:
  n=1 -> 1500.000000
  n=3 -> 4695.463050
  n=10 -> 17703.199967
*/

#include <stdio.h>
#include <math.h>

int main()
{
  // n is a whole number, so it uses int instead of double.
  // n is the number of triangles to calculate. 
  int n;

  // Double is used for numbers that can have decimal values.
  double area;
  double total_area;
  double long_leg;
  double short_leg;
  double hypotenuse;

  // Get the number of triangles to calculate. 
  printf("Enter the number of triangles: ");
  // For an int, scanf uses %d instead of %lf.
  scanf("%d", &n);

  long_leg = 100;
  short_leg = 30;
  total_area = 0;

  // Start i at 0 so it can keep track of how many triangles have been calculated.
  // At 0 no triangles have been calculated yet.
  int i = 0;

  while (i < n) {
    // Calculate the area of each triangle and add it to the total.
    area = 0.5 * long_leg * short_leg;
    total_area = total_area + area;
    // Calculate the hypotenuse to use as the next triangle's long leg.
    hypotenuse = sqrt(long_leg * long_leg + short_leg * short_leg);
    long_leg = hypotenuse;
    // Add 1 to i after each triangle is calculated.
    i = i + 1;
  } 

  // Print the total area with 6 digits after the decimal point.
  printf("%.6lf\n", total_area);

  return 0;
}
  
