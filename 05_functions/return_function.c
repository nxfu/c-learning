#include <stdio.h>

// INTRO:
// A return statement sends a value from a function back to the code that called it.
// The type of the returned value must match the return type written before the function name.
// A return also ends the function immediately, so no code after it runs.

// SYNTAX:
// return_type function_name(parameter_type parameter) {
//     return value;
// }


int square(int number) {
    return number * number;
}

int cube(int number) {
    return number * number * number;
}

int main(void) {

    int number = 0;
    int result = 0;
    int choice = 0;

    printf("Number to Square and Cube\n\n");
    printf("1. Square\n2. Cube\n");
    printf("\nEnter a choice: ");

    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("\nInvalid choice.\n");
        return 1;
    }

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("\nThat is not a valid number.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            result = square(number);
            printf("\nSquare of %d is %d\n", number, result);
            break;
        case 2:
            result = cube(number);
            printf("\nCube of %d is %d\n", number, result);
            break;
        default:
            printf("\nInvalid choice.\n");
            break;
    }

    return 0;
}
