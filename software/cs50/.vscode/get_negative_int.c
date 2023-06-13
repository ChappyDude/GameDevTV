#include <stdio.h>

int get_negative_int(void);
int get_int(char string[]);

int main (void)
{
  int i = get_negative_int();
  printf("%i\n", i);
}

int get_negative_int(void)
{
  int n;
  do
  {
    n = get_int("Negative Interger: ");
  }
  while (n < 0);
  return n;
}

int get_int(char string[])
{
  int input = 0;
  printf("%s\n", string);
  scanf("%d", &input);
  return input;
}