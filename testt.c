#include <stdio.h>
int main(){
  int m, n, min, i, gcd;
  long lcm;  //lcm<4000000000
  scanf("%ld %ld", &m, &n);

  if (m > n)
    min = n;
  else
    min = m;

  for (i = 1; i <= min; i++) {
    if (m%i == 0 && n%i == 0)
      gcd = i;
  }
  lcm = (m*n)/gcd;
  
  printf("GCD: %d\n", gcd);
  printf("LCM: %ld\n", lcm);
}