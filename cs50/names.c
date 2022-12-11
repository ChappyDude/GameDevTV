#include <stdio.h>
#include <string.h>

int main(void)
{
  const char *names[7] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

  for (int i = 0; i < 7; i++)
  {
    if ((strcmp(names[i], "Kev")) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}