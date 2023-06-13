#include <stdio.h>

int main(void)
{
  int number[] = {4, 6, 8, 2, 7, 5, 0};

  for (int i = 0; i < 7; i++)
  {
    if (number[i] == -1)
    {
      printf("Found\n");
      return 0; // Sucess
    }
  }
  printf("Not found\n");
  return 1; // Not success
}