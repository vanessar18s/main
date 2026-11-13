// Vanessa Ramirez

#include <stdio.h>

int main()
{
  char word[1000];
  char new_word[100];

  int i = 0;
  int j = 0;

  printf("Enter a word: ");
  scanf("%s", word);

  i = 0;

  while (word[i] != '\0') {
    if (word[i] >= '0' && word[i] <= '9') {
      new_word[j] = word[i];
      ++j;
    }
    ++i;
  }

  new_word[j] = '\0';

  int sum = 0;
  i = 0;

  while (word[i] != '\0') {
    sum = sum + (new_word[i] - '0');
    ++i;
  }

  printf("New word: %s\n", new_word);
  printf("Sum: %d\n", sum);
    
  return 0;
}
