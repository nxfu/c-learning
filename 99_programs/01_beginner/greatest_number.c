#include <stdio.h>

int main(void) {

    int first = 0;
    int second = 0;
    int third = 0;

    printf("Enter first number: ");
    if (scanf("%d", &first) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", &second) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("Enter third number: ");
    if (scanf("%d", &third) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    if (first >= second && first >= third) {
        printf("%d is the greatest number among three.\n", first);
    }
    else if (second >= first && second >= third) {
        printf("%d is the greatest number among three.\n", second);
    }
    else {
        printf("%d is the greatest number among three.\n", third);
    }

    return 0;
}
