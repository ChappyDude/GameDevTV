#include <stdio.h>
#include <conio.h>

int main(void)
{
  int input;

  printf("Enter 1 to start pump\n");
  printf("Enter 2 to start mixer\n");
  printf("Enter 3 to stop pump\n");
  printf("Enter 4 to stop mixer\n");
  scanf("%d", &input);
  if (input == 1)
  {
    printf("Pump started");
  }
  else if (input == 2)
  {
    printf("Mixer started");
  }
  else if (input == 3)
  {
    printf("Pump stopped");
  }
  else if (input == 4)
  {
    printf("Mixer stopped");
  }
  else 
  {
    printf("Invalid option\n");
  }
  getch();
  return 0;
}