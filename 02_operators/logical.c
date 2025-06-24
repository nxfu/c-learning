#include <stdio.h>

// INTRO:
// Logical operators combine or reverse true and false expressions.
// In C, 0 means false and any other value means true.
//
//   &&  AND  - true only when both conditions are true
//   ||  OR   - true when at least one condition is true
//   !   NOT  - reverses a condition

// SYNTAX:
// result = condition1 && condition2;
// result = condition1 || condition2;
// result = !condition;


int main(void) {

    int isRaining = 1;
    int hasUmbrella = 0;

    printf("isRaining && hasUmbrella -> %d\n", isRaining && hasUmbrella);
    printf("isRaining || hasUmbrella -> %d\n", isRaining || hasUmbrella);
    printf("!isRaining               -> %d\n", !isRaining);

    if (!isRaining || hasUmbrella) {
        printf("\nYou can go outside.\n");
    }
    else {
        printf("\nBetter stay inside.\n");
    }

    return 0;
}
