#include <stdio.h>
#include <math.h>

int main() {
    int a,b,n, found=0;
    double c;

    scanf("%d", &n);
    b = 1;
    while (b < n) {
      a = 1;
      while (a <= b) {
        if (a + b + sqrt(pow(a, 2) + pow(b, 2)) == n) {
          c = sqrt(pow(a, 2) + pow(b, 2));
          found = 1;
          break;
        }
        a++;
      }
      if (found == 1) {
          break;
      }
      b++;
    }
    if (found) {
        printf("(%d, %d, %d)\n", a,b,(int)c);
    } else {
        printf("No triple found.\n");
    }
}