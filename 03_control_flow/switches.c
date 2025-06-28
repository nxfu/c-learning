#include <stdio.h>

// INTRO:
// A switch statement selects code to run by matching a value against several cases.
// Each case ends with break, otherwise the program keeps running into the next case.
// The default case runs when no other case matches.
// A switch only works with whole-number values such as int and char, not with float or strings.

// SYNTAX:
// switch (expression) {
//     case constant1:
//         // code block to be executed
//         break;
//     case constant2:
//         // code block to be executed
//         break;
//     default:
//         // runs when no case matches
//         break;
// }


int main(void) {

    int month = 0;

    printf("Month Number to Name\n");
    printf("\nEnter a month number (1 - 12): ");

    if (scanf("%d", &month) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    switch (month) {

        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number.\n");
            break;
    }

    // The same choice can be written with else if, but a switch stays easier
    // to read when one value is compared against many constants:
    //
    // if (month == 1) {
    //     printf("January\n");
    // } else if (month == 2) {
    //     printf("February\n");
    // } else {
    //     printf("Invalid month number.\n");
    // }

    return 0;
}
