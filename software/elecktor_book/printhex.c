#include <stdio.h>
#include <conio.h>

int main(void)
{
  printf("%x", 0xA914);     // print a hex number
  printf("\n0x%x", 0xA914); // print same number with 0x
  printf("\n0x%X", 0xA914); // hex number in capitals

  getch();
  return 0;
}