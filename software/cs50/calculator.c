#include <stdio.h>

void get_first_number(float * get_first_number);
void get_second_number(float * second_number);

int main (void)
{
  float first_number;
  float second_number;
  float divide;

  get_first_number(&first_number);
  get_second_number(&second_number);

  divide = first_number / second_number;
  printf("Divideis equal to: %.50f\n", divide);
}

void get_first_number(float * first_number)
{
  printf("Enter first_number: ");
  scanf("%f", first_number);
}

void get_second_number(float * second_number)
{
  printf("Enter second_number: ");
  scanf("%f", second_number);
}
