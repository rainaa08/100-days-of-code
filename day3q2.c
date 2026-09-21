//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){

    int a,b;
    printf("Enter 1st number");
    scanf("%d", &a);
    printf("Enter 2nd number");
    scanf("%d", &b);

    int x = a;
    a = b;
    b = x;

    printf("Original Values: %d %d", x,a);
    printf("\nSwapped Values: %d %d", a,b);

    return 0;
}