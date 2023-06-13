#include <stdio.h>
#include <conio.h>

int main (void)
{
  int temper;

  printf("Enter a temperature (0 to 100): ");
  scanf("%d", &temper);
  if (temper >= 30)
  {
    printf("\nSwitch the heater OFF");
  }

  getch();
  return 0;
}