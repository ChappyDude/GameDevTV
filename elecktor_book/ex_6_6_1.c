#include <stdio.h>

int main(void)
{
  printf("%04X\n", 2779);

  #define hex_number (0x5f)
  printf("char: %c, decimal: %d, hexdec: 0x%x\n", hex_number, hex_number, hex_number);
}