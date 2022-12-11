#include <stdio.h>
#include <conio.h>

int main(void)
{
  int guess;

  printf("Try to guess my number:\n\n");
  printf("Enter a number between 1 and 100: ");

  scanf("%d", &guess);

  while (guess != 74)
  {
    if (guess > 74)
    {
      printf("Number is Lower.\n");
    }
    else
    {
      printf("Enter is Higher.\n");
    }
    printf("Enter a number between 1 and 100!\n\n");
    scanf("%d", &guess);
  }
  printf("You guessed the number!\n\n");
  printf("Press any key to quit.");
  getch();
  return 0;
}