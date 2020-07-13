#include <stdio.h>

int main() {
  char str[40];
  int  i=0, count;

  char c;

  printf("String <without a space>: ");
  scanf("%s",str);


  for (; i < 40; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
      printf("%c ", str[i]);
      count += 1;
    }
  }

  printf("\nThis string contains %d vowel%s.\n",count,count>1?"s":"");
  return 0;
}