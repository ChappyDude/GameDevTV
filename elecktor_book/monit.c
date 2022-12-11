#include <stdio.h>
#include <conio.h>

int main(void)
{
  char key = 0;
  int num = 50;

  printf("Press u to increment number\n");
  printf("Press d to decrement number\n");
  printf("Press x to quire\n\n");

  while (key != 'x')
  {
    printf("Number is %d \r", num);
    key = getch();
    if (key == 'u')
    {
      num = num + 1;
    }
    else if (key == 'd')
    {
      num = num - 1;
    }
  }

  return 0;
}