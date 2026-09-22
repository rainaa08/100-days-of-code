//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<Stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    
        if ( n == 0 ){
            printf("Zero");
        }
        else{
            if (n>0)
            printf("Positive");
            else
            printf("Negative");
        }
        return 0;
    }