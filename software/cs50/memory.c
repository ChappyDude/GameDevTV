#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *x = malloc(3 * sizeof(int)); // Allocate memory address for 2 ints, and returns address to first int
  x[0] = 72;
  x[1] = 73;
  x[2] = 33;
  free(x);
}