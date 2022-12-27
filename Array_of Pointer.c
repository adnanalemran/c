
#include <stdio.h>
int main()
{
    char *ptr[3];
    ptr[0]="hello ";
    ptr[1]="How are";
    ptr[2]="you ?";
    printf("%s %s %s",ptr[0], ptr[1],ptr[2] );
    return 0;
}
