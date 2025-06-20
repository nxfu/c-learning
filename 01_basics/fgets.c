#include <stdio.h>
#include <string.h>

// INTRO:
// fgets reads a line of text from standard input and stores it safely in a character array.
// It reads spaces too, and it never writes more characters than the array can hold.
// fgets keeps the newline that was typed, so it is usually removed with strcspn from <string.h>.
// fgets returns NULL when nothing could be read.

// SYNTAX:
// fgets(variable, sizeof(variable), stdin);
// variable[strcspn(variable, "\n")] = '\0';   // remove the trailing newline


int main(void) {

    char name[50] = "";
    char city[50] = "";

    printf("Enter your full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Could not read the name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your city: ");
    if (fgets(city, sizeof(city), stdin) == NULL) {
        printf("Could not read the city.\n");
        return 1;
    }
    city[strcspn(city, "\n")] = '\0';

    printf("\nYour name is: %s\n", name);
    printf("Your city is: %s\n", city);

    return 0;
}
