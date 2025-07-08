#include <stdio.h>

// INTRO:
// break and continue change how a loop repeats:
//
//   break     - leaves the loop immediately, skipping everything that is left
//   continue  - skips the rest of the current repetition and starts the next one
//
// break is also what stops one case of a switch from running into the next.
// Both are best used sparingly, because a clear loop condition is usually easier to read.

// SYNTAX:
// for (initialization; condition; final-expression) {
//     if (some_condition) {
//         continue;   // skip to the next repetition
//     }
//     if (other_condition) {
//         break;      // leave the loop completely
//     }
// }


int main(void) {

    // continue: skip the even numbers, so only the odd ones are printed.
    printf("Odd numbers from 1 to 10:\n");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // break: stop adding as soon as the total passes 20.
    int total = 0;

    printf("\nAdding 1, 2, 3... until the total passes 20:\n");

    for (int i = 1; i <= 10; i++) {
        total += i;
        printf("added %d, total is now %d\n", i, total);

        if (total > 20) {
            printf("Total passed 20, leaving the loop early.\n");
            break;
        }
    }

    // In nested loops, break only leaves the inner loop.
    printf("\nbreak inside a nested loop:\n");

    for (int row = 1; row <= 3; row++) {
        for (int column = 1; column <= 5; column++) {
            if (column > row) {
                break;   // ends this inner loop only, the outer one continues
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
