#include <stdio.h>

// INTRO:
// An enum (enumeration) in C is a user-defined data type that lets you assign meaningful names to a set of integer constants.
// Instead of using numbers like 0, 1, and 2, you can use names like RED, GREEN, and BLUE.
// The first name is 0 by default and each following name is one higher, unless a value is set explicitly.

// SYNTAX:
// enum EnumName {
//     CONSTANT1,          // 0
//     CONSTANT2,          // 1
//     CONSTANT3 = 10,     // an explicit value can be given
//     CONSTANT4           // 11
// };
//
// enum EnumName variable = CONSTANT1;


int main(void) {

    enum Day {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    enum Day today = MONDAY;

    printf("Day number: %d\n", today);   // an enum value prints as its number

    if (today == SATURDAY || today == SUNDAY) {
        printf("It's the weekend.\n");
    }
    else {
        printf("It's a weekday.\n");
    }

    return 0;
}
