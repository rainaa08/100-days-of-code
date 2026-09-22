//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){

    float p,r,t;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter Interest rate: ");
    scanf("%f", &r);
    printf("Enter Time period: ");
    scanf("%f", &t);

    float si = (p * r * t)/100;
    float ci = p * pow( 1 + r/100, t) - p;

    printf("Simple interest: %.2f", si);
    printf("Compound interest: %.2f", ci);


    return 0;
}