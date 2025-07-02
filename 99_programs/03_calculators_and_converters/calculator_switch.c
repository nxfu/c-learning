#include <stdio.h>

int main(void) {

    int firstNumber = 0;
    int secondNumber = 0;
    int choice = 0;

    printf("Enter FIRST number: ");
    if (scanf("%d", &firstNumber) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("Enter SECOND number: ");
    if (scanf("%d", &secondNumber) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("\nWhat would you like to do?\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n0. Exit/Quit\n");

    printf("\nEnter your choice (0 - 5): ");
    if (scanf("%d", &choice) != 1) {
        printf("That is not a valid choice.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("\n%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case 2:
            printf("\n%d - %d = %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case 3:
            printf("\n%d * %d = %d\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case 4:
            // Dividing by zero would crash the program, so it has to be checked first.
            if (secondNumber == 0) {
                printf("\nError: Division by zero (0) is not allowed.\n");
            }
            else {
                printf("\n%d / %d = %d\n", firstNumber, secondNumber, firstNumber / secondNumber);
            }
            break;
        case 5:
            if (secondNumber == 0) {
                printf("\nError: Modulus by zero (0) is not allowed.\n");
            }
            else {
                printf("\n%d %% %d = %d\n", firstNumber, secondNumber, firstNumber % secondNumber);
            }
            break;
        case 0:
            printf("\nThank you for trying this out. :)\n");
            break;
        default:
            printf("\nInvalid choice.\n");
            break;
    }

    return 0;
}
