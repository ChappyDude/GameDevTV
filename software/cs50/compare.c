#include <stdio.h>
#include <string.h>

int main(void)
{
  char i[20];
  char j[20];
  printf("i: ");
  scanf("%s", i);
  printf("j: ");
  scanf("%s", j);

  printf("i: %s, j: %s\n", i, j); // Print string value
  printf("i: %p, j: %p\n", i, j); // Print pointer value, shows they are stored in different memory addresses

  if (strcmp(i, j) == 0)
  {
    printf("Same\n");
  }
  else
  {
    printf("Different\n");
  }
}
