#include <stdio.h>
#include <conio.h>

/* C style comment */
/*
 Multi line C
 style comment
*/

// C++ style comment

// Lets see how to comment a program:

/*--------------------------------------------
  comment.c
  This program converts kilometers to miles
  --------------------------------------------*/

int main(void)
{
  float kilos;    /* stores distance in kilometers */
  float miles;    /* stores distance in miles */

  /* prompt the user for distance in km's */
  printf("\nEnter distance in kilometers: ");
  scanf("%f", &kilos);
  /* convert kilometers to miles */
  miles = kilos * 0.62137;
  /* show the user the result of the calculation */
  printf("\nDistance is %.3f in miles.\n", miles);

  getch();
  return 0;
}