#include <stdio.h>
#include <conio.h>
#include <windows.h>

void Delay(void);

int main(void)
{
  while (!kbhit())
  {
    printf("ON \r");
    Sleep(500);
    printf("OFF \r");
    Sleep(500);
  }
  return 0;
}
