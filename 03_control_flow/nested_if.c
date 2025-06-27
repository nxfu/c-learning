#include <stdio.h>
#include <stdbool.h>

// INTRO:
// A nested if statement places one if statement inside another to test related conditions.
// The inner condition is only checked when the outer condition is true.

// SYNTAX:
// if (outer_condition) {
//     if (inner_condition) {
//         // runs when both conditions are true
//     } else {
//         // runs when only the outer condition is true
//     }
// } else {
//     // runs when the outer condition is false
// }


int main(void) {

    float price = 10.00f;
    bool isMember = true;
    bool isWeekend = true;

    if (isMember) {
        if (isWeekend) {
            printf("Member weekend discount: 20%% off!\n");
            price *= 0.8f;
        }
        else {
            printf("Member discount: 10%% off!\n");
            price *= 0.9f;
        }
        printf("Discounted price is %.2f\n", price);
    }
    else {
        printf("No discount available.\n");
        printf("Price is %.2f\n", price);
    }

    return 0;
}
