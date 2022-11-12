#include <stdio.h>

int main() {
    int p, q;
    int sum, sub, mul, mod;
    float div;

    // It will take two integer numbers
    printf("Enter any 1st positive integer numbers:");
    scanf("%d", &p);
    printf("Enter any 2nd positive integer numbers:");
    scanf("%d", &q);

    // It will perform all arithmetic operations
    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    // It will print the final output of the program
    printf("\n");
    printf("Addition of       %d + %d = %d\n", p, q, sum);
    printf("Subtraction of    %d - %d = %d\n", p, q, sub);
    printf("Multiplication of %d * %d = %d\n", p, q, mul);
    printf("Division of       %d / %d = %f\n", p, q, div);
    printf("Modulus of        %d %% %d = %d\n", p, q, mod);
    return 0;
}
