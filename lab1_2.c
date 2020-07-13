#include <stdio.h>
void main()
{
    int time, day, hour, min;
    printf("Enter computer working time: ");
    scanf("%d", &time);
    day = time/(60*24);
    hour = (time-(day*(24*60)))/60;
    min = time%60;
    printf("It is %d days %d hours and %d minutes.", day, hour, min);
}