#include <stdio.h>

// INTRO:
// A union stores different member types in the same memory location, one value at a time.
// Writing to one member overwrites the others, so only the member that was written last holds a valid value.
// A union is as large as its biggest member, while a struct is as large as all of its members together.

// SYNTAX:
// union UnionName {
//     member_type member1;
//     member_type member2;
// };
//
// union UnionName variable;
// variable.member1 = value;


// The same three members as a struct and as a union, so the two sizes can be compared.
struct Mixed {
    int number;
    float decimal;
    char letter;
};

union Value {
    int number;
    float decimal;
    char letter;
};

int main(void) {

    union Value value;

    value.number = 42;
    printf("number  = %d\n", value.number);

    value.decimal = 3.75f;
    printf("decimal = %.2f\n", value.decimal);

    value.letter = 'A';
    printf("letter  = %c\n", value.letter);

    // The two writes above overwrote number, so reading it again gives
    // whatever those same bytes happen to mean on this machine.
    printf("\nReading number again: %d\n", value.number);

    printf("\nsizeof(struct Mixed) = %zu bytes\n", sizeof(struct Mixed));
    printf("sizeof(union Value)  = %zu bytes\n", sizeof(union Value));

    // A union does not remember which member was written last. When a program
    // needs to know that, it keeps an enum next to the union to record it.

    return 0;
}
