#include <stdio.h>
#include <windows.h>  // For Sleep()
#include <conio.h>

int value = 0;

void count_down_in_select_mode(void);
int main(void)
{
  count_down_in_select_mode();
  getch();
}

void count_down_in_select_mode(void)
{
  for (int i = 5; i > 0; i--)
  {
    printf("i = %d\n", i);
    Sleep(1000);
    if (GetAsyncKeyState(VK_UP))
    {
      i = 5;
      value++;
      printf("Reset i to %d\n, value increase to %d\n", i, value);
    }
    else if (GetAsyncKeyState(VK_DOWN))
    {
      i = 5;
      value--;
      printf("Reset i to %d\n, value decrease to %d\n", i, value);
    }
  }
}

// count_down_in_select_mode()
// detech_value_select()
