// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        int a = i + 1;
        printf("Enter Number %d:", a);
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1] && arr[0] > arr[2])
        printf("%d is the greatest", arr[0]);
    else if (arr[0] > arr[1] && arr[0] < arr[2])
        printf("%d is the greatest", arr[2]);
    else if (arr[0] < arr[1] && arr[1] > arr[2])
        printf("%d is the greatest", arr[1]);
    return 0;
}