#include <stdio.h>
void main()
{
    float r, volume;
    printf("Please enter radius: ");
    scanf("%f", &r);
    volume = (r*r*r) * 4/3 * 22/7;
    printf("The volume of this sphere is %.2f", volume);
}