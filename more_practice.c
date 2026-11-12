// Vanessa Ramirez

#include <stdio.h>

int main()
{
  double array[100];
  double total = 0;
  double x;

  int i = 0;
  int count = 0;

  printf("Enter a sequence of non-negative numbers (or a negative number to quit): ");
  scanf("%lf", &x);

  // Largest number
  
  i = 0;

  while (x >= 0) {
    array[count] = x;
    ++count;
    scanf("%lf", &x);
  }

  double largest;
  
  largest = 0;
  i = 0 ;

  while (i < count) {
    if (array[i] > largest) {
      largest = array[i];
    }
    ++i;
  }

  printf("Largest: %.0lf\n", largest);

  // ------------------------------------------
  
  // Average

  double average;

  average = 0;

  i = 0;

  while (i < count) {
    total = total + array[i];
    ++i;
  }

  average = total / count;

  printf("Average: %.0lf\n", average);

  // --------------------------------------------

  // Above Average

  int count2;
  
  count2 = 0;
  i = 0;

  while (i < count) {
    if (array[i] > average) {
      count2 = count2 + 1;
    }
    ++i;
  }

  printf("Above average: %d\n", count2);

  return 0;
}
