#include <stdio.h>
#include <conio.h>

int main (void)
{
  char ch;

  printf("Type a character and then press Enter: ");
  scanf("%c", &ch);
  printf("\nYou typed %c", ch);
  getch();
  return 0;
}