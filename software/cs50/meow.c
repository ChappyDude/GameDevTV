#include <stdio.h>

void meow(int n);

int main(void)
{
  meow(3);
}

void meow(int n)
{
  for (int idx = 0; idx < n; idx++)
  {
    printf("meow\n");
  }
}
