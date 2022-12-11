#include <stdio.h>
#include <conio.h>

int main (void)
{
  int temper = 20;

  printf("Is the temperature less than 23? %d\n", temper < 23);
  printf("Is the temperature more than 23? %d\n", temper > 23);

  printf("\n Temperature is now increasing..\n\n");
  temper = 50;

  printf("Is the tmeperature less than 23?, %d\n", temper < 23);
  printf("Is the tmeperature more than 23?, %d\n", temper > 23);

  getch();
  return 0;
}  