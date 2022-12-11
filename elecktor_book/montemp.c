#include <stdio.h>
#include <conio.h>

int main(void)
{
  int temper = 30;
  char key = 0;

  printf("Press u to increase the temperature\n");
  printf("Press d to decrease the temperature\n");
  printf("Press x to quir the program\n");
  printf("Temperature is %d deg. C \r", temper);

  while (key != 'x')
  {
    key = getch();
    if (key == 'u')
    {
      temper = temper + 1;
    }
    else if (key == 'd')
    {
      temper = temper - 1;  
    }
    printf("\rTemperature is %d deg. C ", temper);
    if (temper > 35)
    {
      printf("Switch element OFF.    ");
    }
    else if (temper < 30)
    {
      printf("Switch element ON.    ");
    }
    else
    {
      printf("Temperature is correct");
    }
  }
  return 0;
}