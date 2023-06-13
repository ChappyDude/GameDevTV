#include <stdio.h>
#include <conio.h>

void menu(void);

int main(void)
{
  char menu_item = 0;
  int num;

  while (menu_item != 'x')
  {
    menu();
    menu_item = getch();

    if (menu_item == 'h')
    {
      printf("\nEnter hex num: ");
      scanf("%x", &num);
      printf("\nNumber in dec is %d\n", num);
    }
    else if (menu_item == 'd')
    {
      printf("\nEnter dec num:");
      scanf("%d",&num);
      printf("\nNumber in hex is %X\n", num);
    }
    else if (menu_item != 'x')
    {
      printf("\nInvalid menu selection...\n");
    }
  }
  return 0;
}

void menu(void)
{
  printf("\nPress h to convert hex to dec.");
  printf("\nPress d to convert dec to hex.");
  printf("\nPress x to convert to exit.\n.");
}