#include "stdio.h"
int main(void) {
  int i, j=12;
  int *pi, *pj=&j; //*pj change = j change
  *pj = j+3; // = 15
  i = *pj+7; // = 22
  pi = pj;
  *pi = i+j; // = 22 + 15 = 37
  //adr i=FF04 j=FF00
  
  printf("%d\n", pj); //FF00
  printf("%d\n", *pj);
  printf("%d\n", i); //22
  printf("%d\n", pi); //FF00
  printf("%d\n", *pi); //37
  printf("%d\n", pi+2); //FF08
  printf("%d\n", *pi+2); //39
  printf("%d\n", *pi+*pj); //74
  printf("%d\n", &i); //FF04
  printf("%d\n", &j); //FF00
}