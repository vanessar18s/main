// Vanessa Ramirez

#include <stdio.h>

int main()
{
  char first_word[1000];
  char second_word[1000];

  int first_len = 0;
  int second_len = 0;

  printf("Enter two words: ");
  scanf("%s %s", first_word, second_word);

  while (first_word[first_len] != '\0') {
    first_len = first_len + 1;
  }

  while (second_word[second_len] != '\0') {
      second_len = second_len + 1;
    }
    
  if (first_len >= second_len) {
      printf("%s\n", first_word);
    } else {
      printf("%s\n", second_word);
    }
    
    
  return 0;
}
