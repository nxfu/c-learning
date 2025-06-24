#include <stdio.h>

// INTRO:
// Relational operators compare two values and produce 1 when the comparison is true and 0 when it is false:
//
//   ==  equal to                 !=  not equal to
//   >   greater than             <   less than
//   >=  greater than or equal    <=  less than or equal
//
// Be careful: == compares two values, while a single = assigns a value.

// SYNTAX:
// result = operand1 > operand2;
// if (operand1 == operand2) {
//     // code block to be executed
// }


int main(void) {

    int first = 10;
    int second = 5;

    printf("%d == %d -> %d\n", first, second, first == second);
    printf("%d != %d -> %d\n", first, second, first != second);
    printf("%d >  %d -> %d\n", first, second, first > second);
    printf("%d <  %d -> %d\n", first, second, first < second);
    printf("%d >= %d -> %d\n", first, second, first >= second);
    printf("%d <= %d -> %d\n", first, second, first <= second);

    return 0;
}
