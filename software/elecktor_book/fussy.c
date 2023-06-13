#include <stdio.h>
#include <conio.h>

int main(void)
{
  int temper;
  printf("Enter a temperature (0 to 100): ");
  scanf("%d", &temper);
  if (temper == 30)
  {
    printf("\nThe temperature is just right");
  }
  else
  {
    printf("\nThe temperature is too hot or too cold");
  }

  getch();
  return 0;
}