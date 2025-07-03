#include <stdio.h>

int main(void) {

    const double PI = 3.14159265358979323846;

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;

    printf("Enter the radius: ");
    if (scanf("%lf", &radius) != 1) {
        printf("That is not a valid radius.\n");
        return 1;
    }

    if (radius <= 0) {
        printf("The radius must be greater than zero.\n");
        return 1;
    }

    area = PI * radius * radius;                          // OR pow(radius, 2); from <math.h>
    surfaceArea = 4 * PI * radius * radius;
    volume = (4.00 / 3.00) * PI * radius * radius * radius;   // OR pow(radius, 3);

    printf("\nCircle area: %.2lf cm^2\n", area);
    printf("Sphere surface area: %.2lf cm^2\n", surfaceArea);
    printf("Sphere volume: %.2lf cm^3\n", volume);

    return 0;
}
