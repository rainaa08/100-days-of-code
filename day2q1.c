// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{

    int l, b;
    printf("Enter Length: ");
    scanf("%d", &l);
    printf("Enter Breadth: ");
    scanf("%d", &b);

    int area = l * b;
    int perimeter = 2 * (l + b);

    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d", perimeter);

    return 0;
}