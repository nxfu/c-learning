#include <stdio.h>

int main(void) {

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight Converter\n\n");
    printf(" 1. Kilograms (kg) to Pounds (lb)\n 2. Pounds (lb) to Kilograms (kg)\n\n");

    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("That is not a valid choice.\n");
        return 1;
    }

    if (choice == 1) {
        printf("Enter weight in kilograms (kg): ");
        if (scanf("%f", &kilograms) != 1) {
            printf("That is not a valid weight.\n");
            return 1;
        }

        pounds = kilograms * 2.20462f;
        printf("Weight in pounds (lb) is %.2f\n", pounds);
    }
    else if (choice == 2) {
        printf("Enter weight in pounds (lb): ");
        if (scanf("%f", &pounds) != 1) {
            printf("That is not a valid weight.\n");
            return 1;
        }

        kilograms = pounds / 2.20462f;
        printf("Weight in kilograms (kg) is %.2f\n", kilograms);
    }
    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
