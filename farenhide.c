#include <stdio.h>
int main()
{
    float celsius, fahrenheit ;
    printf("Enter the Celsius :");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32 ;
    printf("Fahrenheit is %f",fahrenheit);

    getch();
}
