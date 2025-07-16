#include <stdio.h>

// INTRO:
// A one-dimensional array stores multiple values of the same type in a sequence.
// Each value is reached by its index, and indexes always start at 0,
// so the last index of an array of 5 values is 4.
// C does not check indexes, so reading or writing outside the array is a common bug.

// SYNTAX:
// type array[size];                      // empty array of a fixed size
// type array[] = {value1, value2};       // size taken from the values
// array[index] = value;                  // change one value
// value = array[index];                  // read one value


int main(void) {

    int numbers[] = {10, 20, 30, 40, 50};

    // sizeof gives the size in bytes, so dividing by the size of one element
    // gives the number of elements in the array.
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("First value: %d\n", numbers[0]);
    printf("Last value:  %d\n", numbers[length - 1]);

    numbers[2] = 99;   // change the third value

    printf("\nAll values:\n");
    for (int i = 0; i < length; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
