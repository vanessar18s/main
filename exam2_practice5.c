// Vanessa Ramirez

#include <stdio.h>

int main()
{
  char word[1000];
  char new_word[1000];

  int i = 0;
  int j = 0;

  printf("Enter a word: ");
  scanf("%s", word);

  while (word[i] != '\0') {
    if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') {
      new_word[j] = word[i];
      ++j;
    }
    ++i;
  }

  new_word[j] = '\0';

  printf("%s\n", new_word);
    
  return 0;
}
