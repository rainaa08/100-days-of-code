//Write a program to calculate the area and circumference of a circle given its radius
#include <stdio.h>
int main()
{

    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    
    float area = 3.1415 * r * r;
    float circumference = 2 * 3.1415 * r;

    printf("Area = %.2f\n Circumference = %.2f", area, circumference);
    return 0;
}
    