#include <stdio.h>
int main() {
  int i, n, que, total = 0, buy = 0;
  char game[5][10] = {"PUBG", "OVERWATCH", "THE SIMS4", "DECEIT", "STAXEL"};
  int cost[5] = {559, 1400, 1000, 200, 350};   
  
  printf("Hello, Welcome to games store.\n");
  printf("Now we have 5 interesting games.\n");
  for (i = 0; i < 5; i++){
    printf("%d. %s\n", i+1, game[i]);
  }
  printf(">> Please select the number of games you want: ");
  scanf("%d", &n);
  total += cost[n-1];
  buy += 1;
  printf("You choose \"%s\" and price %d baht.\n", game[n-1], cost[n-1]);
  printf(">> Do you want anything else?(y=1,n=0): ");
  scanf("%d", &que);
  while (que == 1) {
    printf(">> Please select the number of games you want: ");
    scanf("%d", &n);
    printf("You choose \"%s\" and price %d baht.\n", game[n-1], cost[n-1]);
    total += cost[n-1];
    buy += 1;
    printf(">> Do you want anything else?(y=1,n=0): ");
    scanf("%d", &que);
  }
  if (que == 0) {
    printf("You buy %d games and total price is %d baht.\n", buy, total);
  }
}