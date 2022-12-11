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

  printf("Bigger number is %d", MAX(num1,num2));

  getch();
  return 0;
}
