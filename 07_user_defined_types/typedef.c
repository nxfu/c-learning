#include <stdio.h>

// INTRO:
// typedef creates an alias that can make an existing data type easier to read or reuse.
// It does not create a new type; it only gives an existing type a second name.
// Aliases are often written with a capital letter so they stand out from variables.

// SYNTAX:
// typedef existing_type NewName;
// NewName variable = value;


typedef int Number;
typedef unsigned int Age;

int main(void) {

    Number first = 1;
    Number second = 2;
    Number sum = first + second;

    Age age = 18;

    printf("%d + %d = %d\n", first, second, sum);
    printf("Age: %u\n", age);

    return 0;
}
