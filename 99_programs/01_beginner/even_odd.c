#include <stdio.h>

int main(void) {

    int number = 0;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    // A number is even when dividing it by 2 leaves no remainder.
    if (number % 2 == 0) {
        printf("%d is an even number\n", number);
    }
    else {
        printf("%d is an odd number\n", number);
    }

    return 0;
}
