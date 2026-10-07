/*
  Vanessa Ramirez
  CS-171
  10-02-2026
  lab5_median.c
*/

#include <stdio.h>

int main()
{
  // TODO 1: declare double variables a, b, c, min, median, max,
  // dist_to_min, dist_to_max

  double a;
  double b;
  double c;
  double min;
  double median;
  double max;
  double dist_to_min;
  double dist_to_max;
  
  // TODO 2: prompt for and read a, b, and c

  printf("Enter in 3 values: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  
  // TODO 3: figure out min/median/max using nested if/else -
  // see the Day 6 min_median_max demo for the full
  // decision tree structure

  // Compare the values to see which is smallest, middle, and largest. 
  if (a <= b && b <= c) {
    // a is smallest, b is middle, c is largest
    min = a;
    median = b;
    max = c;
  } else if (a <= c && c < b) {
    // a is smallest, c is middle, b is largest
    min = a;
    median = c;
    max = b;
  } else if (c < a && a <= b) {
    // c is smallest, a is middle, b is largest
    min = c;
    median = a;
    max = b;
  } else if (b < a && a <= c) {
    // b is smallest, a is middle, c is largest
    min = b;
    median = a;
    max = c;
  } else if (b <= c && c < a) {
    // b is smallest, c is middle, a is largest
    min = b;
    median = c;
    max = a;
  } else if (c < b && b < a) {
    // c is smallest, b is middle, a is largest
    min = c;
    median = b;
    max = a;
  }
  
  // TODO 4: dist_to_min = median - min

  // Find how far the median is from the minimum
  dist_to_min = median - min;
  
  // TODO 5: dist_to_max = max - median

  // Find how far the median is from the maximum
  dist_to_max = max - median;
  
  // TODO 6: compare dist_to_min and dist_to_max and print
  // exactly one of:
  // "The median is closer to the minimum."
  // "The median is closer to the maximum."
  // "The median is equidistant."

  // Compare the two distances to see which side the median is closer to.
  if (dist_to_min < dist_to_max) {
    // If the distance to the minimum is smaller, the median is closer to the minimum.
    printf("The median is closer to the minimum.\n");
  } else if (dist_to_max < dist_to_min) {
    // If the distance to the maximum is smaller, the median is closer to the maximum.
    printf("The median is closer to maximum.\n");
  } else {
    // If neither distance is smaller, the two distances must be equal.
    printf("The median is equidistant.\n");
  }
  
  return 0;
}
