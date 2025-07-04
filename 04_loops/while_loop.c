#include <stdio.h>

// INTRO:
// A while loop repeats code as long as its condition remains true.
// The condition is checked before every repetition, so the body may never run at all.
// Something inside the loop must eventually make the condition false, otherwise the loop never ends.

// SYNTAX:
// while (condition) {
//     // code block to be executed
// }


int main(void) {

    int i = 0;

    while (i <= 100) {
        printf("%d\n", i);
        i++;               // without this update the loop would run forever
    }

    return 0;
}
