#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int scores[3];
  for (int i = 0; i < 3; i++)
  {
    printf("%i\n", scores[i]);  // Will show remnents of old values in memory, as scores was not initialized
  }
}