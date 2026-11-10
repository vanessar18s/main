// Vanessa Ramirez

#include <stdio.h>

int main()
{
  double array[1000];
  double x;

  int i = 0;
  int count = 0;

  printf("Enter a non-negative number (or a negative number to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    array[count] = x;
    ++count;
    scanf("%lf", &x);
  }

  double difference;
  double largest;
  double smallest;

  largest = array[0];
  smallest = array[0];

  while (i < count) {
    if (array[i] > largest) {
      largest = array[i];
    } if (array[i] < smallest) {
      smallest = array[i];
    }
    ++i;
  }

  difference = largest - smallest;
  
  printf("%.0lf\n", difference);

  return 0;
}
