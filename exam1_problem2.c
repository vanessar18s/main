// Vanessa Ramirez

#include <stdio.h>
#include <math.h>

int main()
{
  // Non-negtive numbers are typed in one at a time
  // ends with -1, negative number is not part of the sequence
  // Print out how many numbers are multiples of three ad print their sum

  double user_input = 0;
  double count = 0;
  double sum = 0;

  printf("Enter a non-negative number (enter -1 to quit): ");
  scanf("%lf", &user_input);

  while (user_input >= -1) {
    printf("You've entered: %lf\n");
    if (fmod(user_input, 3) == 0) {
      count = count + 1;
      sum = sum + user_input;
    // Get user input again
    scanf("%lf", &user_input);
    }
  }

  printf("%.0lf\n %.0lf\n", count, sum);
  
  return 0;
}
