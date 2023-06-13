#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[10];
  char number[10];
} Person;

int main(void)
{
  Person people[2];
  strcpy(people[0].name, "Carter");
  strcpy(people[0].number, "12-34");

  strcpy(people[1].name, "David");
  strcpy(people[1].number, "45-56");

  for (int i = 0; i < 2; i++)
  {
    if (strcmp(people[i].name, "David") == 0)
    {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found");
  return 1;
}