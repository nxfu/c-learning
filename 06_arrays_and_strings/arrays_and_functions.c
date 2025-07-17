#include <stdio.h>

// INTRO:
// An array is not copied when it is passed to a function. The function works on
// the original array, so any change it makes is still there after the call.
// This is different from a normal variable, where the function only gets a copy.
//
// The length does not travel with the array, so it is normally passed as a second
// parameter. Inside the function, sizeof no longer gives the size of the whole
// array, because only a reference to its first element is passed (see 08_pointers).

// SYNTAX:
// return_type function_name(type array[], int length) {
//     // array[index] refers to the caller's array
// }
//
// function_name(array, length);


int sumArray(int numbers[], int length);
void doubleValues(int numbers[], int length);
void printArray(int numbers[], int length);

int main(void) {

    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);   // works here, not inside the function

    printf("Original: ");
    printArray(numbers, length);

    printf("Sum: %d\n", sumArray(numbers, length));

    // This function changes the caller's array.
    doubleValues(numbers, length);

    printf("\nAfter doubleValues: ");
    printArray(numbers, length);

    return 0;
}

int sumArray(int numbers[], int length) {

    int total = 0;

    for (int i = 0; i < length; i++) {
        total += numbers[i];
    }

    return total;
}

void doubleValues(int numbers[], int length) {

    for (int i = 0; i < length; i++) {
        numbers[i] *= 2;   // changes the array that main created
    }
}

void printArray(int numbers[], int length) {

    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}
