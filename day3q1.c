//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){

    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);

    float f = (c * 9/5)  + 32 ;  //°F = (°C × 9/5) + 32
    printf("Fahrenheit: %.0f", f);

    return 0;
}