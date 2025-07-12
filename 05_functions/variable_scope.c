#include <stdio.h>

// INTRO:
// The scope of a variable is the part of the program where its name can be used.
//
//   local   - declared inside a function or a block, exists only there, and is
//             created again from scratch every time that code runs
//   global  - declared outside every function, shared by the whole file
//
// A local variable with the same name as a global one hides the global inside that function.
// Globals are easy to reach from anywhere, which also makes them easy to change by
// accident, so locals and parameters are usually the better choice.

// SYNTAX:
// int globalVariable = 0;          // outside every function
//
// void function_name(void) {
//     int localVariable = 0;       // only exists inside this function
// }


int counter = 0;   // global: every function in this file can use it

void countUp(void);
void showGlobalCounter(void);
void localCounter(void);

int main(void) {

    int counter = 100;   // local: inside main, this name means the local one

    printf("Inside main, counter is the local one: %d\n\n", counter);

    countUp();
    countUp();
    countUp();

    showGlobalCounter();   // a function that can still see the global

    printf("\nBack in main, the local counter is unchanged: %d\n", counter);

    printf("\nA local variable starts again on every call:\n");
    localCounter();
    localCounter();
    localCounter();

    // A variable declared inside a block only exists in that block.
    for (int i = 0; i < 3; i++) {
        int insideLoop = i * 10;   // created and destroyed on every repetition
        printf("insideLoop = %d\n", insideLoop);
    }
    // insideLoop and i cannot be used here.

    return 0;
}

void countUp(void) {
    counter++;   // no local with this name, so this is the global
    printf("countUp changed the global counter to %d\n", counter);
}

void showGlobalCounter(void) {
    printf("The global counter is %d\n", counter);
}

void localCounter(void) {
    int visits = 0;   // created again on every call, so it never grows
    visits++;
    printf("localCounter visits = %d\n", visits);
}
