//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include<stdio.h>
int main(){

    int s;
    printf("Enter seconds: ");
    scanf("%d", &s);

    int hour = s / 3600;
    int remaining = s % 3600;

    int min = remaining /60;
    int seconds = remaining  %60;

    printf("%d:%d:%d", hour,min,seconds);




    return 0;
}