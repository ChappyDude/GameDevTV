#include <stdio.h>
#include <conio.h>

int main(void)
{
  int var = 100;

  printf("The variable var contains the value %d\n", var);
  printf("The address of var is %p", &var);

  getch();
  return 0;
}