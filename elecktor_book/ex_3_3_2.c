#include <stdio.h>
#include <conio.h>

int main(void)
{
  #define MAX(x, y) (((x) > (y)) ? (x) : (y))

  int num1, num2;
  printf("Enter first number\n");
  scanf("%d", &num1);

  printf("Enter second number\n");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    printf("First number %d is greater than second number %d", num1, num2);
  }
  else if (num1 < num2)
  {
    printf("First number %d less than second number %d", num1, num2);
  }
  else
  {
    printf("First number %d equal second number %d", num1, num2);
  }

  getch();
  return 0;
}
