#include <stdio.h>
int binary(int x){
  if (x != 0) {
    binary(x/2); //วางfuncก่อน เพื่อวางprintf เป็นลำดับ ... 3 2 1
    printf("%d", (x%2));
  }
  else {
    return;
  }
}

int main(){
  int n;
  scanf("%d", &n);
  if (n != 0) {
    binary(n);
  }
  else {
    printf("0");
  }
}