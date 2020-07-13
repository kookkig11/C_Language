#include<stdio.h>
 
int main()
{   
    int cost[5], i;
    char game[5][10] = {"PUBG", "OVERWATCH", "THE SIMS4", "DECEIT", "STAXEL"};
    for (i = 0; i < 5; i++);
        printf("%d. %s", i+1, game[i]);
}