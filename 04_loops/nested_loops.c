#include <stdio.h>

// INTRO:
// Nested loops place one loop inside another, which is useful for rows and columns.
// The inner loop finishes all of its repetitions for every single repetition of the outer loop.

// SYNTAX:
// for (initialization; condition; final-expression) {
//     for (initialization; condition; final-expression) {
//         // code block to be executed
//     }
// }


int main(void) {

    // Multiplication table from 1 to 10.
    for (int row = 1; row <= 10; row++) {
        for (int column = 1; column <= 10; column++) {
            printf("%4d", row * column);
        }
        printf("\n");   // move to the next row after each inner loop finishes
    }

    return 0;
}
