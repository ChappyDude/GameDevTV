#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
  int char_length = 50;
  char string[char_length];

  printf("Before: ");
  gets(string);

  printf("After: ");
  int string_length = strlen(string);
  for (int idx = 0; idx < string_length; idx++)
  {
    printf("%c", toupper(string[idx]));
  }
  printf("\n");
}