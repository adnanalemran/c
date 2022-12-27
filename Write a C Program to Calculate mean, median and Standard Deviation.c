#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float *x, mean = 0, med, sd,var;
    int n, i, j, temp;
    printf("Enter the no of items :\t");
    scanf("%d", &n);
    x   = (float *)malloc(sizeof (float) * n);

    /* get n inputs from user */

    for (i = 0; i < n; i++)
    {
        printf("\nEnter your %d no inputs:\t",i+1);
        scanf("%f", &x[i]);
    }
    /* calculate the mean */
    for (i = 0; i < n; i++)
        mean = mean + x[i];
    mean = mean / n;


    /* calculate the variance*/
    for (i = 0; i < n; i++)
        var = var + pow((x[i] - mean), 2);

    var = var / n;

    /* square root of variance is SD */
    sd  = sqrt(var);
    /* sort the given inputs to find median */
    for (i = 0; i < n - 1; i++)
        for (j = i; j < n; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }

    /* calculate the median */
    if ((n + 1) % 2 == 0)
    {
        med = x[((n + 1) / 2) - 1];
    }
    else
    {
        med = (x[((n + 1) / 2) - 1] + x[((n + 2) / 2) - 1]) / 2;
    }

    /* print the outputs */
    printf("\n\n\n\Mean number: %f\n", mean);
    printf("Median number: %f\n", med);
    printf("Standard deviation: %f\n", sd);



    return 0;
}
