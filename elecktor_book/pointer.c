#include <stdio.h>
#include <conio.h>

int main(void)
{
  int data = 123;
  int *ptr;
  ptr = &data;
  printf("data contains %d\n", data);
  printf("data cintains %d\n", *ptr);
  printf("Address of data is %p\n", &data);
  printf("Address of data is %p\n", ptr);
  printf("Address of ptr is %p\n", &ptr);

  getch();
  return 0;
}
