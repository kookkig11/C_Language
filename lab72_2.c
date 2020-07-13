#include <stdio.h>
int remove_vowel(char str[]) {
  char vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  for (int i = 0; str[i]; i++) {
    for (int j = 0; j < 10; j++) { // vowel[]
        if (j < 10 && str[i] == vowel[j]) { // check str[i] = vowel ?
            for (j = i; str[j]; j++) {
                str[j] = str[j+1];
            }
            str[j-1] = '\0';
            i--;
            break;
        }
    }
  }
}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}