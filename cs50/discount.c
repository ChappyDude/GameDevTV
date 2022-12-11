#include <stdio.h>

float discount(float price, int percentage_off);

int main(void)
{
  float regular;
  float sale;
  int percent_off;

  printf("Enter regular price: ");
  scanf("%f", &regular);

  printf("Enter percent off: ");
  scanf("%d", &percent_off);

  sale = discount(regular, percent_off);
  printf("Sale price: %.2f\n", sale);
}

float discount(float price, int percentage_off)
{
  return price * (100 - percentage_off) / 100;;
}