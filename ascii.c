/*
  Vanessa Ramirez
  10/30/2026
  ascii.c

  Goal: see that a char in C is really a small integer. Every
  character has a numeric code (its ASCII value). You can store a
  character like 'd', or its numeric code (103 is 'g'), in the
  same char box, and print it either as a character (%c) or as a
  number (%d). This is also the first time we use an array of
  chars, where the special character '\0' (code 0) marks the end.

  TODO:
    1. Declare an array of 7 chars named c.
    2. Set c[0] to 'd' and c[1] to 'o'.
    3. Set c[2] to the number 103 (not a character literal).
    4. Set c[3] to '\0', the null character, which ends a string.
    5. Print c[0] to c[3] with %c, separated by spaces.
    6. Print the same four boxes with %d, separated by spaces.

  Compile with:
      cc ascii.c
  Run with:
      ./a.out

  Expected output (no input needed):
      d o g <nothing visible: the null character>
      100 111 103 0
*/

#include <stdio.h>

int main()
{
  char c[7];

  c[0] = 'd';
  c[1] = 'o';
  c[2] = 103;
  c[3] = '\0';

  printf("%c %c %c %c\n", c[0], c[1], c[2], c[3]);

  printf("%d %d %d %d\n", c[0], c[1], c[2], c[3]);

  return 0;
}
