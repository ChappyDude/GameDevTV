// mkmain.c
#include <stdio.h>
#include <conio.h>
#include "mkgraph.h"

int main(void)
{
  GraphHeader();

  printf("\n\nOil:  ");
  PrintGraph(10);
  printf("\n\nFlour:  ");
  PrintGraph(18);
  printf("\n\nSugar:  ");
  PrintGraph(4);
  printf("\n\n");

  getch();
  return 0;
}