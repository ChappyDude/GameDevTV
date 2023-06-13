#include <stdio.h>
#include <string.h>

int main (void)
{
  int char_length = 50;
  char string[char_length];

  printf("Input: ");
  gets(string);
  int length = strlen(string);

  printf("Output: ");
  for (int i = 0; i < length; i++)
  {
    printf("%c", string[i]);
  }
  printf("\n");
}