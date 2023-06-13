#include <stdio.h>
#include <conio.h>

int main (void)
{
  float V, R, I;

  printf("Current calculation using Ohm's Law. \n");
  printf("\nEnter the voltage in Volts: ");
  scanf("%f", &V);
  printf("\nEnter the resistance in Ohms: ");
  scanf("%f", &R);
  I = V / R;
  printf("\n\nCurrent in Amps is %f A", I);
  getch();
  return 0;
}