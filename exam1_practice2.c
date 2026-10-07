/*
  Vanessa Ramirez
  10-06-2026
  CS-171
*/

#include <stdio.h>

int main()
{

  // We are given 3 numbers so we need 3 variables
  double first_number;
  double second_number;
  double third_number;

  // Get the 3 numbers from the user
  printf("Enter a number: ");
  scanf("%lf", &first_number);

  printf("Enter a second number: ");
  scanf("%lf", &second_number);

  printf("Enter a third number: ");
  scanf("%lf", &third_number);

  /*
    "Preciely two" means: TWO numbers are equal but the THIRD number is different.
  */

  // First = Third, but First != Second
  if (first_number == third_number && first_number != second_number) {
    printf("Yes! they are equal\n");

    // First = Second, but First != Third
  } else if (first_number == second_number && first_number != third_number) {
    printf("Yes! they are equal\n");

    // What if th SECOND and THIRD are equal
    // First != Second
  } else if (second_number == third_number && second_number != first_number) {
    printf("Yes! they are equal\n");

    // If none of the 3 possibilities worked then they arent two equal
    // Meaning either they are all the same number or different
  } else {
    printf("No! they are not equal\n");
  } 

  return 0;
}
