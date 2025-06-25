#include <stdio.h>

// INTRO:
// The ternary operator chooses one of two values based on a condition.
// It is a short form of a simple if-else statement, and it is the only C operator that takes three operands.

// SYNTAX:
// result = condition ? value_if_true : value_if_false;


int main(void) {

    int age = 0;

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("\nYou're %s\n", (age >= 18) ? "an adult." : "a minor.");

    // The same decision written as an if-else statement:
    // if (age >= 18) {
    //     printf("You're an adult.\n");
    // } else {
    //     printf("You're a minor.\n");
    // }

    return 0;
}
