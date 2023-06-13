#include <stdio.h>


int main(void)
{
  int n;
  do 
  {
    printf("Enter size: ");
    scanf("%d", &n);
  }
  while (n < 1);

  // FOr each row
  for (int i = 0; i < n; i++)
  {
    // For each column
    for (int j = 0; j < n; j++)
    {
      // Print a brick
      printf("#");
    }

    // Move to next row
    printf("\n");
  }
  
}