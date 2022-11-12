#include <stdio.h>
void main()
{
    int number;
    printf("Please Enter any number to check whether it is Divisible by 5 and 10: ");
    scanf("%d,&number");
    if((number %5==0)&&(number %11==0))
        printf("\Given number %d is Divisible by 5 and 11\n\n",number);
    else
        printf("\n\n Given number %d is NOt Divisible by 5 and 11 \n\n",number);

    return 0;
}
