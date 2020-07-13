#include <stdio.h>
main()
{
    int PreC, NowC;
    float PreG, WantG, NowG;
    printf("Input the previous semester GPA: ");
    scanf("%f", &PreG);
    printf("Input the previous credits: ");
    scanf("%d", &PreC);
    printf("Input the credits this semester: ");
    scanf("%d", &NowC);
    printf("Input the required GPA: ");
    scanf("%f", &WantG);
    //WantG = ((PreC*PreG) + (NowC*NowG))/(PreC+NowC)
    NowG = (WantG*(PreC+NowC) - (PreC*PreG)) / NowC;
    printf("The GPA this semester should be %.2f", NowG);
}