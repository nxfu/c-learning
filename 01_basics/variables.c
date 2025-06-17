#include <stdio.h>

// INTRO:
// A variable is a named location in memory used to store a value that can change while a program runs.
// A variable is first declared with a type, and can then be read or given a new value.
// A variable declared with const keeps the same value for the whole program.

// SYNTAX:
// type variable;                 // declaration
// type variable = value;         // declaration with initialization
// variable = value;              // giving an existing variable a new value
// const type VARIABLE = value;   // a value that cannot change


int main(void) {

    int age = 18;             // declared and initialized at the same time
    float height;             // declared now, given a value below
    const int votingAge = 18;

    height = 1.80f;
    age = age + 1;            // the value of a variable can change

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Voting age: %d\n", votingAge);

    return 0;
}
