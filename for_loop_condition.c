#include <stdio.h>
int main()
{
    int n, num, ecount = 0, ocount =0;
    printf("\n Enter your number of Day :");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter a value: ");
        scanf("%d",&num);
        if(num% 2 == 0)
        {
            printf("\n%d is an a even number \n",num);
            ecount ++;
        }
        else
        {
            printf("\n%d is an a odd number \n",num);
            ocount ++;
        }
    }
    printf("\n \nEven count in the line of %d number is %d\n", n,ecount);
    printf("\nEven count in the line of %d number is %d\n", n,ocount);
}