#include <stdio.h>

int main(void) {

    double number1 = 0.0;
    double number2 = 0.0;
    char operator = '\0';
    double result = 0.0;

    printf("Arithmetic Calculator\n");

    printf("\nEnter the first number: ");
    if (scanf("%lf", &number1) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    printf("Enter the operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("That is not a valid operator.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &number2) != 1) {
        printf("That is not a valid number.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("\nResult: %.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
            break;
        case '-':
            result = number1 - number2;
            printf("\nResult: %.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("\nResult: %.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                printf("\nResult: %.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
            }
            else {
                printf("\nError: Division by zero (0) is not allowed.\n");
            }
            break;
        default:
            printf("\nError: '%c' is not a supported operator.\n", operator);
            break;
    }

    return 0;
}
