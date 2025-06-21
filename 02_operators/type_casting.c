#include <stdio.h>

// INTRO:
// A cast converts a value from one type to another inside a single expression.
// It matters most with division: when both operands are int, C throws away the
// decimal part, so 7 / 2 gives 3 instead of 3.5.
// Casting one of the operands to float or double keeps the decimals.
//
// C also converts between types on its own (implicit conversion) when a value is
// stored in a different type, and that conversion can quietly lose information.

// SYNTAX:
// (target_type) value
// result = (target_type) operand1 / operand2;


int main(void) {

    int total = 7;
    int count = 2;

    // Both operands are int, so the result is an int and the .5 is lost.
    printf("total / count without a cast: %d\n", total / count);

    // Casting one operand is enough: the other is converted automatically.
    printf("total / count with a cast:    %.2f\n", (float) total / count);

    // A common place this shows up is calculating an average.
    int marks = 17;
    int subjects = 4;

    printf("\nAverage without a cast: %d\n", marks / subjects);
    printf("Average with a cast:    %.2f\n", (float) marks / subjects);

    // Implicit conversion: storing a float in an int cuts off the decimals,
    // it does not round them.
    float price = 9.99f;
    int wholePart = price;

    printf("\nfloat %.2f stored in an int: %d\n", price, wholePart);

    // A char holds a small number, so it can be read as a character or as a number.
    char letter = 'A';

    printf("\n'%c' as a number: %d\n", letter, letter);
    printf("66 as a character: %c\n", (char) 66);

    return 0;
}
