/*
  Vanessa Ramirez
  array_function_largest.c

  Goal: read numbers until ANY negative number is typed and print the
  largest one, using a function that is given the array.

  TODO:
    1. Above main, write double largest_of(double v[], int n), which
       returns the largest of the first n numbers in v. Start from v[0].
    2. In main, read the sequence into double v[100], counting it in n.
    3. If n is 0, print No numbers. Otherwise print largest_of(v, n)
       with printf("%.0lf\n", ...);

  Compile with:
      cc array_function_largest.c
  Run with:
      ./a.out

  Test cases:
      3 9 4 -1   ->  9
      5 -2       ->  5
      0 0 -1     ->  0
      -1         ->  No numbers.
*/

#include <stdio.h>

double largest_of_array(double array[], int length) {
  double largest = array[0];

  int index = 0;

  while (index < length) {
    if (array[index] > largest) {
      largest = array[index];
    }
    ++index;
  }
  
  return largest;

}

int main()
{

  double array[1000];
  double largest;
  double input;

  int index = 0;
  int length = 0;

  printf("Enter a number: ");
  scanf("%lf", &input);

  index = 0;
  length = 0;

  // Get user input until user quits
  while (input >= 0) {
    array[index] = input;
    ++index;
    ++length;
    scanf("%lf", &input);
  }
  
  if (length == 0) {
    printf("No numbers\n");
  } else {
    largest = largest_of_array(array, length);
    printf("The largest is %lf\n", largest);
  }
 
  return 0;
}

  /*
  double numbers[1000];
  double largest;
  double input;

  int i = 0;
  int length = 0;

  printf("Enter a number: ");
  scanf("%lf", &input);

  i = 0;
  length = 0;

  // Get user input until user quits
  while (input >= 0) {
    numbers[i] = input;
    ++i;
    ++length;
    scanf("%lf", &input);
  }

  // Find the largest
  largest = numbers[0];
  i = 0;

  while (i < length) {
    if (numbers[i] > largest) {
      largest = numbers[i];
    }
    ++i;
  }

  if (length == 0) {
    printf("No numbers\n");
  } else {
    printf("The largest is %lf\n", largest);
  }
  */
