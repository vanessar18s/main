/*
  palindrome.c

  Goal: read a word and decide whether it is a palindrome (reads the same
  forward and backward), using ONE array and two indexes that move toward
  each other from opposite ends. Do not build a second array holding the
  reversed word.

  TODO:
    1. Declare a char array w of 100 and ints len, front, back and
       is_palindrome.
    2. Read the word with scanf("%s", w).
    3. Find the length: set len to 0. While w[len] is not '\0', add 1
       to len.
    4. Set front to 0, back to len - 1, and is_palindrome to 1 (the
       word is a palindrome until a mismatch proves otherwise).
    5. While front is less than back: if w[front] is not equal to
       w[back], set is_palindrome to 0. Then add 1 to front and
       subtract 1 from back.
    6. If is_palindrome is 1, print the word followed by "is a
       palindrome". Otherwise print the word followed by "is not a
       palindrome".

  Compile with:
      cc palindrome.c
  Run with:
      ./a.out

  Test cases:
      racecar  ->  racecar is a palindrome   (odd length)
      noon     ->  noon is a palindrome      (even length)
      level    ->  level is a palindrome
      hello    ->  hello is not a palindrome
      a        ->  a is a palindrome         (one letter)
*/

#include <stdio.h>

int main()
{
  char w[100];

  int len;
  int front;
  int back;
  int is_palindrome;

  printf("Enter a word: ");
  scanf("%s", w);

  len = 0;

  while (w[len] != '\0') {
    len = len + 1;
  }

  front = 0;
  back = len - 1;
  is_palindrome = 1;

  while (front < back) {
    if (w[front] != w[back]) {
      is_palindrome = 0;
    }
    front = front + 1;
    back = back - 1;
  }

  if (is_palindrome == 1) {
    printf("Is a palindrome\n");
  } else {
    printf("Is not a palindrome\n");
  }

  return 0;
}
