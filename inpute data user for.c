#include <stdio.h>
int main()
{
    int i, itemNum;
    int data[5] ={1,2,3,4,5} ;

        printf("Enter item Number :");
        scanf("%d",&itemNum);

        for (i = 0; i<itemNum ; i++ )
        {
            printf("\nEnter  Number :");
            scanf("%d",&data[i]);

        }


     //print arrya data
     for (i=0; i<5 ; i++)
     {
         printf("%d\t",data[i]);
     }

    return 0;
}
