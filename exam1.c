// Vanessa Ramirez

#include <stdio.h>

int main()
{
  double side_a = 0;
  double side_b = 0;
  double side_c = 0;

  printf("Enter the sides of your triangle: ");
  scanf("%lf %lf %lf", &side_a, &side_b, &side_c);

  if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}
