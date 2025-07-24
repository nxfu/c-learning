#include <stdio.h>
#include <stdbool.h>

// INTRO:
// The stdbool header provides the bool type and the true and false values.
// Before it existed, C used int with 0 for false and any other value for true.
// A bool still prints as 1 or 0 with the %d format specifier.
//
// Provided names: bool, true (1), false (0)

// SYNTAX:
// #include <stdbool.h>
//
// bool variable = true;
// if (variable) {
//     // code block to be executed
// }


int main(void) {

    bool isRaining = false;
    bool hasUmbrella = true;
    int age = 20;

    printf("isRaining:   %d\n", isRaining);
    printf("hasUmbrella: %d\n", hasUmbrella);

    // A comparison already produces a true or false result,
    // so it can be stored directly in a bool.
    bool isAdult = (age >= 18);
    printf("isAdult:     %d\n", isAdult);

    // Inside a condition a bool reads more clearly than 0 and 1.
    if (!isRaining || hasUmbrella) {
        printf("\nYou can go outside.\n");
    }
    else {
        printf("\nBetter stay inside.\n");
    }

    // A bool prints as a number, so the ternary operator is handy for words.
    printf("Raining? %s\n", isRaining ? "yes" : "no");

    return 0;
}
