#include <stdio.h>

// INTRO:
// A function groups reusable code; this example returns the sum of two values.
// The values passed to a function are called arguments, and the variables that receive them are parameters.

// SYNTAX:
// return_type function_name(parameter_type parameter1, parameter_type parameter2) {
//     return value;
// }
//
// result = function_name(argument1, argument2);


int add(int firstNumber, int secondNumber);

int main(void) {

    int firstNumber = 0;
    int secondNumber = 0;
    int sum = 0;

    printf("Enter FIRST number: ");
    if (scanf("%d", &firstNumber) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("Enter SECOND number: ");
    if (scanf("%d", &secondNumber) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    sum = add(firstNumber, secondNumber);
    printf("\n%d + %d = %d\n", firstNumber, secondNumber, sum);

    return 0;
}

int add(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}
