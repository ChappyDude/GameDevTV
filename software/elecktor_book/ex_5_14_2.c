#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int bar_graph_length;
int key_pressed;
char terminate_char = 'c';
char increment_char = 'u';
char decrement_char = 'd';
int bar_char = 178;

#define UPPER_LIMIT (35)
#define LOWER_LIMIT (0)

void print_bar_graph(int length);
void limit_min_max(int length);

int main(void)
{
  bar_graph_length = 0;

  while (key_pressed != terminate_char)
  {
    key_pressed = getch();

    if (key_pressed == increment_char)
    {
      bar_graph_length++;
      limit_min_max(bar_graph_length);
    }
    else if (key_pressed == decrement_char)
    {
      bar_graph_length--;
      limit_min_max(bar_graph_length);
    }
    print_bar_graph(bar_graph_length);
  }

  return 0;
}

void limit_min_max(int length)
{
  if (length >= UPPER_LIMIT)
  {
    bar_graph_length = UPPER_LIMIT;
    printf("%c", 7);
  }
  else if (length <= 0)
  {
    bar_graph_length = 0;
  }
}

void print_bar_graph(int length)
{
  printf("\n\r");
  for (size_t idx = 0; idx < length; idx++)
  {
    printf("%c", bar_char);
  }
}