#include <stdio.h>

// INTRO:
// An if-else statement runs different code depending on whether a condition is true or false.
// An else if can be added to test more conditions in order.
// Only the first block whose condition is true will run.

// SYNTAX:
// if (condition) {
//     // runs when the condition is true
// } else if (another_condition) {
//     // runs when the condition above is false and this one is true
// } else {
//     // runs when none of the conditions above are true
// }


int main(void) {

    int age = 0;

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    if (age < 0) {
        printf("An age cannot be negative.\n");
    }
    else if (age >= 18) {
        printf("You're an adult.\n");
    }
    else {
        printf("You're a minor.\n");
    }

    return 0;
}
