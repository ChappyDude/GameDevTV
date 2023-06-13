#include <stdio.h>

void get_point(int * points);

int main(void)
{
  const int MY_POINTS = 2;
  int points;
  get_point(&points);

  if (points < MY_POINTS)
  {
    printf("You lost fewer points than me.\n");
  }
  else if (points > MY_POINTS)
  {
    printf("You lost more points than me.\n");
  }
  else
  {
    printf("You lost the same number of points as me.\n");
  }
}

void get_point(int * points)
{
  printf("Enter number of points: ");
  scanf("%d", points);
}
