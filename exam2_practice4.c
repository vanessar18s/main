// Vanessa Ramirez

#include <stdio.h>

int main()
{
  // Variables
  int score[11];
  int x;
  int i;

  i = 0;
  
  // Initialize array
  while (i < 11) {
    score[i] = 0;
    ++i;
  }

  // User input
  printf("Enter a non-negative number (or a negative number to quit): ");
  scanf("%d", &x);

  i = 0;
  
  while (x >= 0) {
    score[x] = score[x] + 1;
    scanf("%d", &x);
  }

  i = 0;

  while (i < 11) {
    printf("%d: %d\n", i, score[i]);
    i = i + 1;
  }

  return 0;
}
