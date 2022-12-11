#include <stdio.h>
#include <conio.h>

int main(void)
{
  // a 3 bit hex number padded to 8 bits
  printf("0x%X\n", 0x5);          // unpadded
  printf("0x%2X\n", 0x5);         // pad wiht spaces
  printf("0x%02X\n\n", 0x5);      // pad with 0

  // a 3 bit hex number padded to 16 bits
  printf("0x%4X\n", 0x5);         // pad with spaces
  printf("0x%04X\n\n", 0x5);        // pad with 0

  // decimal number padded
  printf("%d\n", 123);            // unpadded
  printf("%5d\n", 123);           // padded with spaces
  printf("%05d\n\n", 123);          // padded with 0

  // float padded
  printf("%f\n", 34.218);         // unpadded
  printf("%10f\n", 34.218);       // padded with spaces
  printf("%10.4f\n", 34.218);     // pad = space, 4 nums after.
  printf("%010.4f\n\n", 34.218);  // pad = 0, 4 nums after.
}