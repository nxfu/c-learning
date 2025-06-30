#include <stdio.h>

int main(void) {

    int sideA = 0;
    int sideB = 0;
    int sideC = 0;

    printf("Enter three sides of the triangle: ");
    if (scanf("%d %d %d", &sideA, &sideB, &sideC) != 3) {
        printf("Please enter three numbers.\n");
        return 1;
    }

    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        printf("Each side must be greater than zero.\n");
        return 1;
    }

    // Any two sides together must be longer than the third one,
    // otherwise the sides cannot form a triangle at all.
    if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) {
        printf("These sides cannot form a triangle.\n");
        return 1;
    }

    if (sideA == sideB && sideB == sideC) {
        printf("The triangle is equilateral.\n");
    }
    else if (sideA == sideB || sideB == sideC || sideA == sideC) {
        printf("The triangle is isosceles.\n");
    }
    else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}
