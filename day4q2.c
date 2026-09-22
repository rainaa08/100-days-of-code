//Write a program to find and display the sum of the first n natural numbers
#include<Stdio.h>
int main(){

    int a;
    printf("Enter your number");
    scanf("%d", &a);

    int sum = 0;


    for ( int i = 1 ; i <= a ; i++){
        
        sum = sum + i;
        
    }
    printf("sum: %d", sum);

    return 0;}