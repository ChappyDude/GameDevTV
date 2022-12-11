#include <stdio.h>
#include <conio.h>

int main(void)
{
  int input;

  printf("Enter 1 to start pump\n");
  printf("Enter 2 to start mixer\n");
  scanf("%d", &input);
  if (input == 1)
  {
    printf("Pump started.\n");
  }
  if (input == 2)
  {
    printf("Mixer started.\n");
  }
  getch();
  return 0;
}
