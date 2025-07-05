#include <stdio.h>

// INTRO:
// A do-while loop runs its body once before checking whether it should repeat.
// This makes it a good fit for menus and input prompts, which must run at least one time.
// Unlike a while loop, the condition is written at the end and is followed by a semicolon.

// SYNTAX:
// do {
//     // code block to be executed
// } while (condition);


int main(void) {

    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
