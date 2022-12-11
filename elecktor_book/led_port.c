#include <stdio.h>
#include <conio.h>

int main(void)
{
  int LEDs = 0x88;
  int *ptr;

  ptr = &LEDs;
  printf("LEDs are set to %x\n", *ptr);
  *ptr = 0x44;
  printf("LEDs are set to %x", *ptr);

  getch();
  return 0;
}