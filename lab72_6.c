#include <stdio.h>
int charcount(char *s)
{
   int count = 0;
   for (; *s != '\0'; *s++) {
     count += 1;
   }
   return count;
}

void charweave(char *s,char *result)
{
  int count = charcount(s), i, j, k = 0;
  for (i = 0, j = count - 1; i < count * 2; i++)
    result[i] = i % 2 ? s[j--] /*time:2 4 6 ..*/ : s[i-(k++)] /* time:1 3 5 ..*/;
  result[i] = '\0';
}

main(){
   char str[100],result[200];
   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}