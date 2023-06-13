#include <stdio.h>

int main(void)
{
#if 0
  int n = 50;
  int *p = &n;
  printf("%p\n", p);  // Variable
  printf("%i\n", *p); // Pointer to variable

  char *s = "HI!";
  char c = s[0];  // Copy of char H, this new variable is stored in a diff memory address
  char *p = &c;
  printf("%p\n", s);
  printf("%p\n", p);

  char *s = "HI!";
  char *p = &s[0];
  printf("%p\n", p);  // Both same value, s is just an address of the first character in the string
  printf("%p\n", s);

  printf("%p\n", &s[0]);  // Memory address of all other char elements
  printf("%p\n", &s[1]);
  printf("%p\n", &s[2]);
  printf("%p\n", &s[3]);
#endif

  char *s = "HI!";
  printf("%c\n", s[0]); // Show value of each char element
  printf("%c\n", s[1]);
  printf("%c\n", s[2]);

  printf("%c\n", *s); // Derefernce s, grabbing the value of the pointer to the first char of a string
  printf("%c\n", *(s+1)); // pointer arithmetic to go to next element
  printf("%c\n", *(s+2));

  int numbers[] = {4, 6, 8, 2, 7, 5, 0};
  printf("%i\n", *numbers); // Show value of int in array of ints
  printf("%i\n", *(numbers + 1)); 
  printf("%i\n", *(numbers + 2));
  printf("%i\n", *(numbers + 3));
  printf("%i\n", *(numbers + 4));
  printf("%i\n", *(numbers + 5));
  printf("%i\n", *(numbers + 6));
}