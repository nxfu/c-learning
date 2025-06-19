#include <stdio.h>

// INTRO:
// scanf reads formatted input, such as a number, from standard input.
// The & operator passes the address of the variable so that scanf can store the value inside it.
// scanf returns how many values it read successfully, which is the simplest way to detect invalid input.
//
// Note: write a space before %c (" %c") so scanf skips the newline left behind by an earlier input.

// SYNTAX:
// scanf("%d", &variable);
// scanf("%f", &variable);
// scanf(" %c", &variable);
// scanf("%d %d", &variable1, &variable2);


int main(void) {

    int age = 0;

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("You're %d years old.\n", age);

    return 0;
}
