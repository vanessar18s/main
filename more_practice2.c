// Vanessa Ramirez

#include <stdio.h>

int main()
{
  char word[100];
  char new_word[100];

  int i = 0;
  int j = 0;

  printf("Enter a word: ");
  scanf("%s", word);
  
  // -------------------------------------------------------------------------

  // Removes digits and copies only letters into a new word
  
  while (word[i] != '\0') {
    if (word[i] >= 'A'&& word[i] <= 'Z'|| word[i] >= 'a' && word[i] <= 'z') {
      new_word[j] = word[i];
      ++j;
    }
    ++i;
  }

  new_word[j] = '\0';

  // -------------------------------------------------------------------------

  // Lowercase to uppercase

  i = 0;

  while(new_word[i] != '\0') {
    if (new_word[i] >= 'a' && new_word[i] <= 'z') {
      new_word[i] = new_word[i] - 32;
    }
    ++i;
  }

  
  /* Other Way
     
  char uppercase;
  i = 0;

  while (new_word[i] != '\0') {
    if (new_word[i] >= 'a' && new_word[i] <= 'z') {
      uppercase = new_word[i] - 32;
      new_word[i] = uppercase;
    }
    i++;
  }
   */
  
  // -------------------------------------------------------------------------

  // Counting the vowels

  int vowels = 0;

  i = 0;
  
  while (new_word[i] != '\0') {
    if (new_word[i] == 'A' || new_word[i] == 'E' ||
	new_word[i] == 'I' || new_word[i] == 'O' ||
	new_word[i] == 'U') {
      ++vowels;
    }
    ++i;
  }

  printf("%s\n", new_word);
  printf("Vowels: %d\n", vowels);
  
  return 0;
}
