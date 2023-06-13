#include <stdio.h>
#include <conio.h>

int main(void)
{
  char ch = -100;
  unsigned char uch = 0xff;
  short shrt = 20;
  unsigned short ushrt = 0xffff;
  int in = -10000;
  unsigned int uin = 0xffffffff;
  long lng = 100000001;
  unsigned long ulng = 0xffffffff;

  printf("char = %d\n", ch);
  printf("unsigned char = %d\n", uch);
  printf("short = %hi\n", shrt);
  printf("unsigned short = %hu\n", ushrt);
  printf("int =  %d\n", in);
  printf("unsigned int =  %u\n", uin);
  printf("long =  %ld\n", lng);
  printf("unsigned long =  %lu\n", ulng);

  // getch();
  return 0;
}