#include <stdio.h>
#include <conio.h>

void Count(void);

int main(void)
{
  printf("Counting to 5\n");
  Count();
  printf("Counting to 5 again\n");
  Count();
  getch();
  return 0;
}

void Count(void)
{
  int count = 1;

  while (count <= 5)
  {
    printf("%d\n", count);
    count = count + 1;
  }
}