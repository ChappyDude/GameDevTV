#include <stdio.h>
#include <conio.h>

void Count(int num, int skip);

int main(void)
{
  printf("Counting to 5, skipping 3\n");
  Count(5, 3);
  printf("Counting to 12, skipping 10\n");
  Count(12, 10);
  getch();
  return 0;
}

void Count(int num, int skip)
{
  int count = 1;

  while (count <= num)
  {
    if (count != skip)
    {
      printf("%d\n", count);
    }
    count += 1;
  }
}