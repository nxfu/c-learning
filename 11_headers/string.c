#include <stdio.h>
#include <string.h>

// INTRO:
// The string header provides functions for working with null-terminated character arrays.
// The destination array must always be large enough to hold the result, including the '\0'.
//
// Common functions:
//   strlen(text)              - length of the text, not counting '\0'
//   strcpy(destination, text) - copy a string
//   strcat(destination, text) - join a string onto the end of another
//   strcmp(text1, text2)      - compare, returns 0 when the strings are equal
//   strchr(text, character)   - find a character in a string
//   strcspn(text, "\n")       - position of the first matching character,
//                               often used to remove the newline left by fgets

// SYNTAX:
// #include <string.h>
//
// size_t length = strlen(text);
// strcpy(destination, source);
// strcat(destination, source);
// if (strcmp(text1, text2) == 0) {
//     // the strings are equal
// }


int main(void) {

    char first[50] = "Hello";
    char second[] = "World";
    char sentence[50] = "";

    // strlen returns a size_t, which is printed with %zu.
    printf("first:  \"%s\" (length %zu)\n", first, strlen(first));
    printf("second: \"%s\" (length %zu)\n", second, strlen(second));

    strcpy(sentence, first);      // sentence is now "Hello"
    strcat(sentence, ", ");       // sentence is now "Hello, "
    strcat(sentence, second);     // sentence is now "Hello, World"

    printf("\nAfter strcpy and strcat: \"%s\"\n", sentence);

    // strcmp returns 0 for equal strings, a negative value when the first
    // string comes earlier alphabetically, and a positive value when it comes later.
    printf("\nstrcmp(\"%s\", \"%s\") = %d\n", first, second, strcmp(first, second));
    printf("strcmp(\"%s\", \"%s\") = %d\n", first, first, strcmp(first, first));

    if (strcmp(first, "Hello") == 0) {
        printf("\nfirst is equal to \"Hello\"\n");
    }

    return 0;
}
