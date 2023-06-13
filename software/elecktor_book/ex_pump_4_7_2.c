#include <stdio.h>

int main(void)
{
  int input = 0;

  while (input != 5)
  {
    printf("Enter 1 to start pump\n");
    printf("Enter 2 to start mixer\n");
    printf("Enter 3 to stop pump\n");
    printf("Enter 4 to stop mixer\n");
    printf("Enter 5 to exit\n");
    scanf("%d", &input);

    if (input == 1)
    {
      printf("Started pump\n");
    }
    else if (input == 2)
    {
      printf("Started mixer\n");
    }
    else if (input == 3)
    {
      printf("Stop pump\n");
    }
    else if (input == 4)
    {
      printf("Stop mixer\n");
    }
    else if (input == 5)
    {
      printf("Exiting.\n");
    }
    else
    {
      printf("Invalid option\n");
    }
  }
  return 0;
}