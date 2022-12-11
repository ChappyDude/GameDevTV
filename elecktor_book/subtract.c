#include <stdio.h>
#include <conio.h>

int main(void)
{
  char key = 0;
  int num1, num2 = 0;

  printf("Subtraction program\n");

  while (key != 'x')
  {
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number to subtract: ");
    scanf("%d", &num2);

    printf("%d - %d = %d\n", num1, num2, num1-num2);

    printf("Press any key to subtrct again\n or x to quit\n");
    key = getch();
  }

  return 0;
}