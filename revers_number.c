#include <stdio.h>
int main()
{
    int n, n1, n2,n3, revers ;
    printf("Enter your number:");
    scanf("%d",&n);
    n1 = n/100;
    n2 = (n%100);
    n3 = (n % 100) / 100;


    printf("\n%d",n1);
    printf("\n%d",n3);

}
