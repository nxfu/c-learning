#include <stdio.h>
#include <string.h>

// INTRO:
// In C, a string is an array of characters that ends with a null character ('\0').
// That hidden null character marks the end of the text, which is why a string
// always needs one more slot than the number of visible characters.
// Because a string is just an array, it can be read one character at a time with an index.
//
// This lesson covers what a string is. The functions that work on strings
// (strcpy, strcat, strcmp, and friends) are covered in 11_headers/string.c

// SYNTAX:
// char string[] = "text";           // size taken from the text
// char string[size] = "text";       // fixed size, must fit the text and '\0'
// string[index]                     // one character of the string
// printf("%s\n", string);           // print a whole string


int main(void) {

    char message[] = "Hello";

    printf("%s\n", message);

    // strlen counts the visible characters, so it does not count the '\0'.
    // It returns a size_t, which is printed with %zu.
    printf("Length: %zu\n", strlen(message));
    printf("Slots used in memory: %zu\n", sizeof(message));   // one more, for the '\0'

    printf("\nFirst character: %c\n", message[0]);
    printf("Last character:  %c\n", message[strlen(message) - 1]);

    // A string can be walked through until the null character is reached.
    printf("\nOne character per line:\n");
    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c\n", message[i]);
    }

    // Single characters can be changed, because a string is an array.
    message[0] = 'J';
    printf("\nAfter changing the first character: %s\n", message);

    return 0;
}
