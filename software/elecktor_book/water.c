#include <stdio.h>
#include <conio.h>

int main(void)
{
  int water_level = 0;

  printf("Pumping 10L of water...\n\n");

  while(water_level < 10)
  {
    water_level += 1;
    printf("Progress: %d\n", water_level);

  }

  printf("\nFinished");
  getch();
  return 0;
}