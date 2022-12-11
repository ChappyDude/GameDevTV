// mkgraph.c
#include <stdio.h>

void GraphHeader(void)
{
  printf("\n------------\n");
  printf("| Tank levels:  \n");
  printf("------------\n");
}

void PrintGraph(int length)
{
  if (length < 0)
  {
    return;
  }
  else if (length > 20)
  {
    length = 20;
  }

  while (length)
  {
    printf("%c", 176);
    length -= 1;
  }
}