#include <stdio.h>
#include <conio.h>

#include "splitfunc.h"

int main(void)
{
  int first, second;

  printf("Program determins which number is bigger.\n");
  printf("Enter an integer number: ");
  scanf("%d", &first);
  printf("Entr a 2nd integer number: ");
  scanf("%d", &second);

  printf("%d is bigger", FindBiggest(first, second));

  getch();
  return 0;
}