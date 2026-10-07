/*
  Vanessa Ramirez
  10-06-2026
  CS-171
*/

#include <stdio.h>

int main()
{
  // score = current score being entered
  // total = keeps a runnign total of all valid scores
  // count = keeps track of how many valid scores were entered
  double score;
  // keep total and count at 0 because we havent recieved any scores yet
  double total = 0;
  double count = 0;

  printf("Enter a score: ");
  scanf("%lf", &score);

  // loop ends at -1 loops stops running
  while (score != -1) {
    // add the current score to the running total
    total = total + score;
    // increase by 1 by the amount of scores goes through
    count = count + 1;
    // Get the next score
    // the while loop needs a new score to check
    scanf("%lf", &score);
    // count == 0 means NO scores were entered
  } if (count == 0) {
    printf("No scores entered\n");
    // if count is not 0 we have scores
    // average = total / count
  } else {
    printf("%lf\n", total / count);
  }
  
  return 0;
}
