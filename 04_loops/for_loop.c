#include <stdio.h>

// INTRO:
// A for loop repeats code while managing initialization, a condition, and an update in one statement.
// It is the usual choice when the number of repetitions is known in advance.
//
//   initialization   - runs once before the loop starts
//   condition        - checked before every repetition, the loop stops when it is false
//   final-expression - runs after every repetition, usually to update the counter

// SYNTAX:
// for (initialization; condition; final-expression) {
//     // code block to be executed
// }


int main(void) {

    for (int i = 1; i <= 100; i++) {   // i = i + 1 or i += 1 works as well
        printf("%d\n", i);
    }

    return 0;
}
