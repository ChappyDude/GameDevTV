#include <stdio.h>
#include <conio.h>

float AddNum(float num1, float num2);

int main(void)
{
  float add_result;

  printf("Adding two numbers:\n");
  add_result = AddNum(10.34, 100.56);
  printf("Result is %.2f", add_result);

  getch();
  return 0;
}

float AddNum(float num1, float num2)
{
  float result;

  result = num1 + num2;
  return result;
}