#include <stdio.h>
#include <conio.h>

void Count(int num);

int main(void)
{
  printf("Counting to 2\n");
  Count(2);
  printf("Counting to 10\n");
  Count(10);
  getch();
  return 0;
}

void Count(int num)
{
  int count = 1;

  while (count <= num)
  {
    printf("%d\n", count);
    count += 1;
  }
}