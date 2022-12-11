#include <stdio.h>
#include <conio.h>

int main(void)
{
  FILE *fptr;     // pointer to file
  char chr;       // stores character read from file

  fptr = fopen("textfile.txt", "r");  // open file
  while ((chr = getc(fptr)) != EOF)
  {
    printf("%c\t0x%02x\t%d\n", chr, chr, chr);
  }
  fclose(fptr);   // close file
  getch();
  return 0;
}
