#include <stdio.h>
#include <ctype.h>
#include <string.h>  // for strcpy
#include <stdlib.h> // for malloc

int main(void)
{
  char s[20];
  printf("s: ");
  scanf("%s", s);

  char *t = malloc(strlen(s) + 1);  // find allocated memory space, +1 for the null string ender thingy
  if (t == NULL)  // if malloc fails to find any free space
  {
    return 1;
  }


  strcpy(t, s); // Copy content of s into t

  if (strlen(t) > 0)  // Prevent us from accessing memory of absent data
  {
    t[0] = toupper(t[0]);
  }

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  free(t); // free up used memory space
}