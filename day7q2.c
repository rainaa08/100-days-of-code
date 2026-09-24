//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){

    char a;
    printf("Enter your letter: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y')
    printf("%c is a vowel", a);
    else{
    printf("%c is a consonant", a);}

    return 0;
}