////Write a program to find the roots of a quadratic equation and categorize them
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x1, x2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        printf("Two distinct real roots: %.2f and %.2f", x1, x2);
    }
    else if (D == 0) {
        x1 = -b / (2 * a);

        printf("Two equal real roots: %.2f", x1);
    }
    else {
        printf("The roots are complex.");
    }

    return 0;
}