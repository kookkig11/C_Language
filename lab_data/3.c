#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int formatter(char c[], int start, int end, int b) {
  char tmp[end - start];
  for (int j = 0; j < strlen(tmp); j++) {
    tmp[j] = ' ';
  }

  for (int i = start; i <= end; i++) {
    tmp[i] = c[i];
    if (b == 1) {
      break;
    }
  }
  return atoi(tmp);
}

int main() {
  char ball_line[50];
  int n, i;

  scanf("%s", ball_line);
  scanf("%d", &n);

  int countBall = strlen(ball_line);
  
  if ((n > countBall) || (n <= 0)){
    printf("ERROR");
  }
  else {
    int max = -1, a, a2;
    for (i = 0; i < countBall; i++) {
      if ((countBall%n) == 0 && (countBall/n) == 1) {
        a = formatter(ball_line, i, i + (countBall / n), 1);
        a2 = formatter(ball_line, countBall-i-n, countBall-i, 1);
      } else {
        a = formatter(ball_line, i, i+(countBall/n), 2);
        a2 = formatter(ball_line, countBall-i-n, countBall-i, 1);
      }
      
      if (a > max) {
        max = a;
      }
      if (a2 > max) {
        max = a2;
      }
    }

    printf("%d", max);
  }

  return 0;
}