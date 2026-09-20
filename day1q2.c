// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter 1st number");
    scanf("%f", &a);
    printf("Enter 2nd number");
    scanf("%f", &b);

    float sum = a + b;
    float difference =  a - b;
    float product = a*b;
    float quotient =  a/b;

    printf("\nSum = %.0f\n Difference = %.0f\n Product = %.0f\n Quotient = %.2f\n", sum ,difference, product, quotient);

    return 0;

}