#include <stdio.h>

int get_int(char string[]);

int main (void)
{
  int n = get_int("How many scores: ");
  int score[n];
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    score[i] = get_int("Score: ");
    sum = sum + score[i];
  }

  printf("Average: %.2f\n", sum/(n*1.0));
}

int get_int(char string[])
{
  int input = 0;
  printf("%s\n", string);
  scanf("%d", &input);
  return input;
}