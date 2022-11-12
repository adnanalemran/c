#include <stdio.h>
void main()
{
    float h, r, vol;

    printf("Enter hight : ");
    scanf("%f",&h);

    printf("\nEnter Radias : ");
    scanf("%f",&r);

    vol = (22*r*r*h)/7;
    printf("\nVoc : %f",vol);
    return 0;
}
