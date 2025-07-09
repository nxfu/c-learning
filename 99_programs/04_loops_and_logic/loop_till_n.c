#include <stdio.h>

int main(void) {

    int n = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    if (n < 0) {
        printf("Please enter a number of zero or more.\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }

    // The same count can be written with a while loop:
    // int i = 0;
    // while (i <= n) {
    //     printf("%d\n", i);
    //     i++;
    // }

    return 0;
}
