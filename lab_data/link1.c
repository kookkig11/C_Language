#include <stdio.h>
int main() {
  int n, count = 0;
  scanf("%d", &n);
  char homeList[n*2];
  char ans[n*2];
  for (int i = 0; i < n; i++) {
      scanf(" %c", &homeList[i]);
  }

  char me;
  scanf(" %c", &me);
  int edge;
  scanf("%d", &edge);

  for (int i = 0; i < edge; i++) {
    char a, b;
    scanf(" %c-%c", &a, &b);
    if (a == me) {
      ans[count] = b;
      count++;
    } else if (b == me) {
      ans[count] = a;
      count++;
    }
  }
  ans[count] = '\0';

  printf("%d\n", count);
  for (int j = 0; homeList[j] != '\0'; j++) {
    for (int k = 0; ans[k] != '\0'; k++) {
      if (homeList[j] == ans[k]) {
        if (k == count-1 && homeList[j] == ans[k]){
          printf("%c", ans[k]);
        }
        else{
          printf("%c\n", ans[k]);
        }
      }
    }
  }
  
  return 0;
}