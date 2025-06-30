#include <stdio.h>

int main(void) {

    int age = 0;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("That is not a valid age.\n");
        return 1;
    }

    // The conditions are checked from the smallest age upwards, so each one
    // only has to rule out the ranges that were already handled above it.
    if (age < 0) {
        printf("An age cannot be negative.\n");
    }
    else if (age < 13) {
        printf("You're a child.\n");
    }
    else if (age < 18) {
        printf("You're a teenager.\n");
    }
    else if (age < 65) {   // international: 65+ | india: 60+
        printf("You're an adult.\n");
    }
    else {
        printf("You're a senior citizen.\n");
    }

    return 0;
}
