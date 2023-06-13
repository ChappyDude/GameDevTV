#include <stdio.h>
#include <stdlib.h>
#if 0
int main(void)
{
  // Dynamically allocate an array of size 3
  int *list = malloc(3 * sizeof(int));
  if (list == NULL)
  {
    return 1;
  }
  
  // Assign three numbers to that array
  list[0] = 1;
  list[1] = 2;
  list[2] = 3;

  // Time passes

  // Resize old array to be of size 4
  int *tmp = realloc(list, 4 * sizeof(int));
  if (tmp == NULL)
  {
    free(list);
    return 1;
  }

  // Add fourth number to new array
  tmp[3] = 4;

  // Remember new array
  list = tmp;

  for (size_t i = 0; i < 4; i++)
  {
    printf("%i\n", list[i]);
  }
  free(list); // ALso frees tmp, as list = tmp
}

typedef struct node
{
  int number;
  node *next;
} node;
#endif

typedef struct node
{
  int number;
  struct node *next;
} node;


int main(void)
{
  // list of size
  node *list = NULL;

  // add a number to list
  node *n = malloc(sizeof(node));
  if (n == NULL)
  {
    return 1;
  }
  n->number = 1;
  n->next = NULL;

  // Update list to point to new node
  list = n;

  // Add a number to list
  n = malloc(sizeof(node));
  if (n==NULL)
  {
    free(list);
    return 1;
  }
  n->number = 2;
  n->next = NULL;
  list->next = n;

  // A a number to list
  n = malloc(sizeof(node));
  if (n==NULL)
  {
    free(list->next); // Done in this order, to prevent touching memory after freeing it
    free(list);
    return 1;
  }
  n->number = 3;
  n->next = NULL;
  list->next->next = n;

  // Print numbers
  for (node *tmp = list; tmp != NULL; tmp = tmp->next)
  {
    printf("%i\n", tmp->number);
  }

  // Free list
  while (list != NULL)
  {
    node *tmp = list->next;
    free(list);
    list = tmp;
  }
  return 0;
}

