//Q7: Write a program to swap two numbers without using a third variable.
#include<Stdio.h>
int main(){

    int a,b;
    printf("Enter 1st number");
    scanf("%d", &a);
    printf("Enter 2nd number");
    scanf("%d", &b);

    printf("Original values: a = %d b = %d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("swapped values: a = %d b = %d", a,b);
    return 0;
}