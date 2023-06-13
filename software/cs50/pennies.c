#include <stdio.h>
#include <math.h>

int main(void)
{
  float amount;
  printf("Enter dollar amount: ");
  scanf("%f", &amount);

  int pennies = round(amount * 100);
  printf("Pennies: %i\n", pennies);
}

