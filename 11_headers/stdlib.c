#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// INTRO:
// The stdlib header provides general utilities, including memory allocation and number conversion.
//
// Common functions:
//   atoi(text)         - convert text to an int
//   atof(text)         - convert text to a double
//   rand()             - random number, usually seeded with srand(time(NULL))
//   srand(seed)        - set the starting point for rand
//   abs(x)             - absolute value of an int
//   malloc, calloc, realloc, free - dynamic memory allocation (see 09_memory_management)
//   exit(status)       - end the program immediately

// SYNTAX:
// #include <stdlib.h>
//
// int number = atoi(text);
// double decimal = atof(text);
// int value = rand() % range;


int main(void) {

    char numberText[] = "42";
    char decimalText[] = "3.75";

    // Text read with fgets is always a string, so it has to be converted
    // before it can be used in a calculation.
    int number = atoi(numberText);
    double decimal = atof(decimalText);

    printf("\"%s\" converted to int:    %d\n", numberText, number);
    printf("\"%s\" converted to double: %.2f\n", decimalText, decimal);
    printf("The int doubled: %d\n", number * 2);

    printf("\nabs(-25) = %d\n", abs(-25));

    // srand comes from <stdlib.h> and time comes from <time.h>.
    srand((unsigned int) time(NULL));

    printf("\nThree dice rolls:\n");
    for (int i = 0; i < 3; i++) {
        printf("  %d\n", rand() % 6 + 1);
    }

    return 0;
}
