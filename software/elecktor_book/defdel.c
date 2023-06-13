#include <stdio.h>
#include <conio.h>

#define DEL_CNT 100000000

void Delay(int count);

int main(void)
{
  while (!kbhit())
  {
    printf("ON \r");
    Delay(DEL_CNT);
    printf("OFF \r");;
    Delay(DEL_CNT);
  }
  return 0;
}

void Delay(int count)
{
  while (count)
  {
    count -= 1;
  }
}