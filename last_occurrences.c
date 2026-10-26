/*
  Vanessa Ramirez
  last_occurrences.c

  Now that we have arrays, we can store the whole sequence as we read it, then 
  go back and answer the question afterward. The sequence is non-negative numbers ending with a negative number
  (any negative number stops it; it is not part of the sequence).

  Compile with:
      cc last_occurrences.c
  Run with:
      ./a.out

  Test cases:
      3 5 5 2 5 -1  ->  The last number (5) occurs 3 times.
      4 9 4 6 -4    ->  The last number (6) occurs 1 times.
      -1            ->  No numbers.
*/

#include <stdio.h>

int main()
{
  // Variables
  int int_array[1000];
  int num_element;
  int user_input;
  int i;
  
  int last_index = 0;
  int last_element = 0;
  int count = 0;

  // Initialize variables
  num_element = 0;
  user_input = 0;
  i = 0;

  // Initiliaze array
  while (i < 1000) {
    int_array[i] = 0;
    ++i;
  }

  printf("Enter a non-negative numer (or negative to quit): ");
  scanf("%d", &user_input);

  while (user_input >= 0) {
    int_array[num_element] = user_input;
    ++num_element;
    
    printf("Enter a non-negative numer (or negative to quit): ");
    scanf("%d", &user_input);
  }

  // Debugging
  // printf("You've entered %d numbers\n", num_element);

  // Print out all the number that were entered
  // Reset i
  //  i = 0;

  //Traverse the array one element at a time
  // while (i < num_element) {
  //  printf("%d: %d\n", i, int_array[i]);
  //   ++1;
  // }

  // Determine the last element, and the index of the last time
  // Count the number of times the last element appears in the array
  
  printf("The last element you have entered was: %d\n" int_array[num_element - 1]);

  last_index = num_items;
  last_element = int_array[last_index - 1];

  i = 0;


  while (i < last_index) {
    if (int_array[i] == last_element) {
    ++count
  }
    ++i;
  }

  printf("The last element %d, appeared %d times\n" last_element, count); 
  

  return 0;
}
