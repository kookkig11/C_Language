#include <stdio.h>

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int range = 0;
    switch (month) {
        case 1: case 10: range = 1; break;
        case 2: case 3: case 11: range = 4; break;
        case 5: range = 2; break;
        case 6: range = 5; break;
        case 8: range = 3; break;
        case 9: case 12: range = -1;
    }
    return (day + range) % 7;
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch(dow){
        case SUN: printf("Sunday.\n"); break;
        case MON: printf("Monday.\n"); break;
        case TUE: printf("Tuesday.\n"); break;
        case WED: printf("Wednesday.\n"); break;
        case THU: printf("Thursday.\n"); break;
        case FRI: printf("Friday.\n"); break;
        case SAT: printf("Saturday.\n"); break;
    }
}