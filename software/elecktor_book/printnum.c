#include <stdio.h>
#include <conio.h>

int main(void)
{
  int the_num;

  the_num = 498;
  printf("The number is %d in dec\n", the_num);
  printf("The number is %X in hex\n", the_num);
  // Change the number
  the_num = 0xFA39C;
  printf("\nThe number is %d in dec\n", the_num);
  printf("The number is %X in hex\n", the_num);

  getch();
  return 0;
}