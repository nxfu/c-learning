#include <stdio.h>
#include <math.h>

// INTRO:
// The math header provides functions for common mathematical operations.
// Most of them take and return a double.
//
// Common functions:
//   sqrt(x)     - square root            pow(x, y)  - x raised to the power y
//   fabs(x)     - absolute value         round(x)   - nearest whole number
//   ceil(x)     - rounded up             floor(x)   - rounded down
//   sin(x), cos(x), tan(x)               log(x), log10(x)
//
// On Linux and macOS the math library must be linked when compiling: gcc math.c -o math -lm

// SYNTAX:
// #include <math.h>
//
// result = sqrt(value);
// result = pow(base, exponent);


int main(void) {

    double number = 45.0;

    printf("Number:        %.2f\n", number);
    printf("sqrt:          %.4f\n", sqrt(number));
    printf("pow(x, 2):     %.2f\n", pow(number, 2));
    printf("round:         %.2f\n", round(6.7));
    printf("ceil:          %.2f\n", ceil(6.2));
    printf("floor:         %.2f\n", floor(6.8));
    printf("fabs:          %.2f\n", fabs(-6.5));

    return 0;
}
