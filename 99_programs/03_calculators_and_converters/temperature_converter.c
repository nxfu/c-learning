#include <stdio.h>

int main(void) {

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Converter\n\n");
    printf("C. Celsius to Fahrenheit\nF. Fahrenheit to Celsius\n\n");

    printf("What would you like to do: ");
    if (scanf(" %c", &choice) != 1) {
        printf("That is not a valid choice.\n");
        return 1;
    }

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        if (scanf("%f", &celsius) != 1) {
            printf("That is not a valid temperature.\n");
            return 1;
        }

        fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
        printf("Temperature in Fahrenheit is %.1f\n", fahrenheit);
    }
    else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        if (scanf("%f", &fahrenheit) != 1) {
            printf("That is not a valid temperature.\n");
            return 1;
        }

        // The brackets matter: the 32 must be subtracted before multiplying.
        celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
        printf("Temperature in Celsius is %.1f\n", celsius);
    }
    else {
        printf("Invalid choice. Please enter C or F.\n");
    }

    return 0;
}
