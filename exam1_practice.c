/*
  Vanessa Ramirez
  10-06-2026
  CS-171 Exam 1
*/

#include <stdio.h>

int main()
{
  // Declare variables for the 2 scores we are given
  double first_exam; // score of the first exam
  double second_exam; // score of the second exam

  // This stores the score we calculate for exam 3
  double third_exam; // score need for the third exam

  printf("First exam score: ");
  scanf("%lf", &first_exam);

  printf("Second exam score: ");
  scanf("%lf", &second_exam);

  // Average = total / number of exams
  // An average of 90 on 3 exams means 90*3 = 270 total points
  // Subtract the first two scores to find the score needed on exam 3
  third_exam = 270 - first_exam - second_exam;

  // An exam score cannot be more than 100
  if (third_exam >= 100) {
    printf("Its not possible to get an A\n");
  } else {
    printf("Third exam score is: %.0lf\n", third_exam);
  }
 
  return 0;
}
