#include <stdio.h>
#define ARRAY_SIZE 98
int main() {
  int i, j;
  int A[ARRAY_SIZE] = {0};

  for (i = 2; i < ARRAY_SIZE; i++)
    A[i] = 1; //true

  for (i = 2; i < ARRAY_SIZE; i++) {
    for (j = i + 1; j < ARRAY_SIZE; j++) {
      if (j%i == 0)
        A[j] = 0; //can mod = false
    }
  }

  for (i = 2; i < ARRAY_SIZE; i++)
    if (A[i] != 0) // 0 = false & 1 = true
        printf("%d ", i);

  printf("\n");

  return 0;
}