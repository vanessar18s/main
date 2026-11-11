// Vanessa Ramirez

#include <stdio.h>

int main()
{
  char word[100];

  int i;
  int uppercase;

  printf("Enter a word: ");
  scanf("%s", word);
  
  i = 0;
  uppercase = 0;

  while (word[i] != '\0') {
    if (word[i] >= 'A' && word[i] <= 'Z') {
      uppercase = uppercase + 1;
	}
    ++i;
  }

  printf("%d\n", uppercase);
  
  return 0;
}
