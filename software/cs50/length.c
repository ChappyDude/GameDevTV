#include <stdio.h>

int string_length(char string[]);

int main (void)
{
  int char_length = 50;
  char string[char_length];
  
  printf("Enter a string: ");
  gets(string);

  printf("%i\n", string_length(string));
}

int string_length(char string[])
{
  int i = 0;
  while (string[i] != '\0')
  {
    i++;
  }
  return i;
}