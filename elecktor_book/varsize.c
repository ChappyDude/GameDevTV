#include <stdio.h>
#include <conio.h>

int main(void)
{
  printf("On this computer\n");
  printf("A char is %u byte, thats %u bits\n", sizeof(char), sizeof(char)*8);
  printf("A short is %u bytes thats %u bits\n", sizeof(short), sizeof(short)*8);
  printf("A int is %u bytes thats %u bits\n", sizeof(int), sizeof(int)*8);
  printf("A long is %u bytes thats %u bits\n", sizeof(long), sizeof(long)*8);

  getch();
  return 0;
}