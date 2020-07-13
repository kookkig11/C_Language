#include <stdio.h>
int main()
{
    int money, b1, b5, b20, b50;
    printf("Enter an amount: ");
    scanf("%d", &money);
    b50 = money / 50;
    b20 = (money-(b50*50)) / 20;
    b5 = (money-(b50*50)-(b20*20)) / 5;
    b1 = money % 5;
    printf("1: %d\n", b1);
    printf("5: %d\n", b5);
    printf("20: %d\n", b20);
    printf("50: %d", b50);
}