#include <stdio.h>
int main()
{
  int level, year;
  printf("school level of student: ");
  scanf("%d", &level);
  printf("how many of learning: ");
  scanf("%d", &year);

  if (year > 3 || ((level > 3) && (year > 0))) {
     printf("YES");
  }
  else {
     printf("NO");
  }
}