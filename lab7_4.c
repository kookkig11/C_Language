#include "stdio.h"
int main(void) {
  int a[10] = {0, 1}, *ptr;
  int  k;
  //adr a[0] = FFE0
  ptr  =  a+2; // a[0]+2 = a[2] = 1 //adr FFE8
  for(k=2; k<10; k++)
      a[k] = a[k-1]+a[k-2];
      /*  a[2] = a[1]+a[0] = 1
          a[3] = 2
          a[4] = 3
          a[5] = 5
          a[6] = 8
          a[7] = 13
          a[8] = 21
          a[9] = 34 */
  
  printf("%d\n", *ptr);
  printf("%d\n", *(ptr+1) );
  printf("%d\n", ptr); //FFE8
  printf("%d\n", ptr[3]);
  printf("%d\n", ptr[-1]);
  printf("%d\n", &a[4]); //FFF0
  printf("%d\n", *(ptr+2));
  printf("%d\n", ptr+3); //FFF4
  printf("%d\n", &ptr[3]); //FFF4
  printf("%d\n", ptr[5]);
}