#include <stdio.h>

int main(void) {

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Please enter a number of rows greater than zero.\n");
        return 1;
    }

    printf("Enter the number of columns: ");
    if (scanf("%d", &columns) != 1 || columns <= 0) {
        printf("Please enter a number of columns greater than zero.\n");
        return 1;
    }

    printf("Enter the symbol to print: ");
    if (scanf(" %c", &symbol) != 1) {
        printf("That is not a valid symbol.\n");
        return 1;
    }

    printf("\n");

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            printf("%2c", symbol);
        }
        printf("\n");
    }

    return 0;
}
