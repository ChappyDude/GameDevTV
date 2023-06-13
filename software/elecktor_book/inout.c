#include <stdio.h>
#include <conio.h>

int main (void)
{
  int input, result;

  printf("Enter a number to add 5 to: ");
  scanf("%d", &input);
  result = input + 5;
  printf("%d + 5 = %d", input, result);
  getch();
  return 0;
}