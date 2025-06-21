#include <stdio.h>

// INTRO:
// Arithmetic operators perform mathematical calculations on numeric values:
//
//   +  addition          -  subtraction
//   *  multiplication    /  division
//   %  modulus, the remainder left after an integer division
//
// Dividing two int values performs integer division, so 10 / 3 gives 3 and not 3.33.
// The increment (++) and decrement (--) operators add or subtract 1 from a variable.

// SYNTAX:
// result = operand1 + operand2;
// result = operand1 % operand2;
// variable++;
// variable--;


int main(void) {

    int first = 10;
    int second = 3;

    printf("%d + %d = %d\n", first, second, first + second);
    printf("%d - %d = %d\n", first, second, first - second);
    printf("%d * %d = %d\n", first, second, first * second);
    printf("%d / %d = %d  (integer division)\n", first, second, first / second);
    printf("%d %% %d = %d  (remainder)\n", first, second, first % second);

    // To divide with decimals, at least one operand must be a decimal type.
    printf("%d / %d = %.2f  (decimal division)\n", first, second, (float) first / second);

    first++;    // same as first = first + 1
    second--;   // same as second = second - 1
    printf("\nAfter first++ and second--: first = %d, second = %d\n", first, second);

    return 0;
}
