// Vanessa Ramirez

/* #include <stdio.h>

int main()
{
  double array[1000];
  double x;
  
  int i = 0;
  int n = 0;

  printf("Enter a non-ngeative number (or a negative number to quit): ");
  scanf("%lf", &x);

  while (x >= 0) {
    array[n] = x;
    ++n;
    scanf("%lf", &x);
  }

  i = n - 1;

  while (i >= 0) {
    printf("%.0lf\n", array[i]);
    i = i - 1;
  }

  printf("%.0lf\n", array[i]);

  return 0;
}
*/

// --------------------------------------------------------------------

/*#include <stdio.h>

int main()
{
  double array[11];
  double x;
  
  int i = 0;
  int n = 0;

  printf("Enter a non-negative number (or a negative number to quit): ");
  scanf("%lf", &x);

  i = 0;

  while (x >= 0) {
    array[n] = x;
    ++n;
    scanf("%lf", &x);
  }

  double difference;
  double largest;
  double smallest;

  largest = array[0];
  smallest = array[0];

  while (i < n) {
    if (array[i] > largest) {
      largest = array[i];
    } else if (array[i] < smallest) {
      smallest = array[i];
    }
    i = i + 1;
  }

  difference = largest - smallest;

  printf("%.0lf\n", difference);

  
  return 0;
}
*/

// -----------------------------------------------------------------

/* #include <stdio.h>

int main()
{
  char word[100];
  int uppercase = 0;
  int i = 0;

  printf("Enter a word: ");
  scanf("%s", word);

  while (word[i] != '\0') {
    if (word[i] >= 'A' && word[i] <= 'Z') {
      uppercase = uppercase + 1;
    }
    ++i;
  }

  printf("%d\n", uppercase);

  return 0;
}
*/

// -----------------------------------------------------------------

/* #include <stdio.h>

int main()
{
  int scores[11] = {0};
  int x;
  int i = 0;

  // while (i < 11) {
  // scores[i] = 0;
  // ++i;
  // }

  printf("Enter a number: ");
  scanf("%d", &x);

  while (x >= 0) {
    scores[x] = scores[x] + 1;
    scanf("%d", &x);
  }

  while (i < 11) {
    printf("%d: %d\n", i, scores[i]);
    ++i;
  }

  return 0;
}
*/
// -----------------------------------------------------------------

/* #include <stdio.h>

int main()
{
  char word1[1000];
  char word2[1000];

  int i = 0;
  int j = 0;

  printf("Enter a words: ");
  scanf("%s", word1);

  while (word1[i] != '\0') {
    if (word1[i] != 'a' && word1[i] != 'e' && word1[i] != 'i' && word1[i] != 'o' && word1[i] != 'u') {
      word2[j] = word1[i];
      ++j;
  }
    ++i;
  }

  word2[j] = '\0';

  printf("%s\n", word2);

  return 0;
}
*/

// -----------------------------------------------------------------

/* #include <stdio.h>

int main()
{
  char word1[1000];
  char word2[1000];

  int len1 = 0;
  int len2 = 0;

  printf("Enter two words: ");
  scanf("%s %s", word1, word2);

  while (word1[len1] != '\0' ) {
    len1 = len1 + 1;
  }

  while (word2[len2] != '\0') {
    len2 = len2 + 1;
  }

  if (len1 >= len2) {
    printf("%s\n", word1);
  } else {
    printf("%s\n", word2);
  }
  
  return 0;
}
*/
