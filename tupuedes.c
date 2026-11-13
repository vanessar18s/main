// Vanessa Ramirez

#include <stdio.h>

int main()
{
  double array[1000];
  double x;

  int i = 0;
  int count = 0;

  printf("Enter a non-negative number (or a neg to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    array[count] = x;
    ++count;
    scanf("%lf", &x);
  }

  double smallest;

  smallest = array[0];
  
  i = 1;

  while (i < count) {
    if (array[i] < smallest) {
      smallest = array[i];
    }
    ++i;
  }

  printf("Smallest: %.0lf\n", smallest);
  // -------------------------------------------------------------
  //Numbers that appear more then once
  
  int j;
  int count2 = 0;

  i = 0;

  while (i < count) {
    j = i + 1;
    while (j < count) {
      if (array[i] == array[j]) {
	count2 = count2 + 1;
      }
      ++j;
    }
    ++i;
  }

    printf("Numbers appearing more than once: %d\n", count2);
  

  return 0;
}
