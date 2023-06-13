#include <stdio.h>
#include <conio.h>

int main(void)
{
  FILE *fptr;

  // create a text file to write to
  fptr = fopen("asciiout.txt", "w");
  putc(0x48, fptr);
  putc(0x45, fptr);
  putc(0x4C, fptr);
  putc(0x4C, fptr);
  putc(0x4F, fptr);
  fclose(fptr);

  printf("Finished writing file: asciiout.txt");
  getch();
  return 0;
}