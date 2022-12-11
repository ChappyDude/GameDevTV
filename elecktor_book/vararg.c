#include <stdio.h>
#include <conio.h>

void Message(char ch);

int main(void)
{
  char key = 0;

  printf("Press a key\n");
  printf("Press x to exit\n");

  while (key != 'x')
  {
    key = getch();
    Message(key);
  }
  getch();
  return 0;
}

void Message(char ch)
{
  if (ch == 'x')
  {
    printf("Bye!\n");
  }
  else
  {
    printf("You pressed %c\n", ch);
  }
}