#include <stdio.h>

// INTRO:
// A two-dimensional array stores values in rows and columns.
// The first index selects the row and the second index selects the column.
// Nested loops are the usual way to visit every element.

// SYNTAX:
// type array[rows][columns];
// type array[rows][columns] = {{value1, value2}, {value3, value4}};
// array[row_index][column_index] = value;


int main(void) {

    char numpad[][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
        {'*', '0', '#'}
    };

    int rows = sizeof(numpad) / sizeof(numpad[0]);
    int columns = sizeof(numpad[0]) / sizeof(numpad[0][0]);

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            printf("%c ", numpad[row][column]);
        }
        printf("\n");
    }

    return 0;
}
