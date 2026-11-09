// Vanessa Ramirez

#include <stdio.h>

int main()
{
  double array[1000];
  double x;

  int count = 0;
  int i = 0;

  printf("Enter a non-negative number (or a negative number to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    array[count] = x;
    ++count;
    scanf("%lf", &x);
  }

  i = count - 1;
  
  while (i >= 0) {
    printf("%.0lf\n", array[i]);
    --i;
  }

  printf("\n");

  return 0;
}
