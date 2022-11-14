
#include <stdio.h>
#include <math.h>
int main()
{
   int Num, First_Digit, Digits_Count, Last_Digit, x, y, Swap_Num;
   printf("\n Enter the number : ");
   scanf("%d", & Num);
   Digits_Count = log10(Num);
   First_Digit = Num / pow(10, Digits_Count);
   Last_Digit = Num % 10;
   x = First_Digit * (pow(10, Digits_Count));
   y = Num % x;
   Num = y / 10;
   Swap_Num = Last_Digit * (pow(10, Digits_Count)) + (Num * 10 + First_Digit);
   printf(" \n The Number after Swapping the First Digit and Last Digit =  %d", Swap_Num);

   return 0;
}
