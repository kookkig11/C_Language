#include <stdio.h>
int main(){
  int m, n, min, i = 1, gcd;
  long lcm;  //lcm<4000000000
  scanf("%d %d", &m, &n);

  if (m > n) {
    min = n;
  }
  else {
    min = m;
  }

  while (i <= min) {
    if (m%i == 0 && n%i == 0) {
      gcd = i;
    }
    i+=1;
  }

  lcm = m/gcd;
  lcm *= n;  
  printf("GCD: %d\n", gcd);
  printf("LCM: %ld\n", lcm);
}