#include <stdio.h>
#include <conio.h>

#define PI 3.14159

float CircArea(float radius);

int main(void)
{
  float radius;

  printf("Enter radius of circle: ");
  scanf("%f", &radius);
  printf("Area of circle is %.3f", CircArea(radius));

  getch();
  return 0;
}

float CircArea(float radius)
{
  return PI * radius * radius;
}
