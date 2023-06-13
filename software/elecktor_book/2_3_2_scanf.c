#include <stdio.h>
#include <conio.h>

int main (void)
{
  int input;

  printf("Enter an integer number: ");
  scanf("%d", &input);
  printf("\n\nYou entered %d", input);
  getch();
  return 0;
}