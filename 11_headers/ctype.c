#include <stdio.h>
#include <ctype.h>

// INTRO:
// The ctype header provides functions for testing and converting individual characters.
// The test functions return a non-zero value (true) when the character matches, and 0 (false) when it does not.
//
// Common functions:
//   isalpha(c)  - is it a letter?
//   isdigit(c)  - is it a digit from 0 to 9?
//   isalnum(c)  - is it a letter or a digit?
//   isspace(c)  - is it a space, tab, or newline?
//   isupper(c)  - is it an uppercase letter?
//   islower(c)  - is it a lowercase letter?
//   toupper(c)  - returns the uppercase version of the character
//   tolower(c)  - returns the lowercase version of the character

// SYNTAX:
// #include <ctype.h>
//
// if (isdigit(character)) {
//     // code block to be executed
// }
// character = toupper(character);


int main(void) {

    char text[] = "C is Fun 123!";

    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int others = 0;

    // Walk through the text one character at a time until the null character.
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            letters++;
        }
        else if (isdigit(text[i])) {
            digits++;
        }
        else if (isspace(text[i])) {
            spaces++;
        }
        else {
            others++;
        }
    }

    printf("Text: \"%s\"\n\n", text);
    printf("Letters: %d\n", letters);
    printf("Digits:  %d\n", digits);
    printf("Spaces:  %d\n", spaces);
    printf("Others:  %d\n", others);

    printf("\nUppercase: ");
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", toupper(text[i]));
    }

    printf("\nLowercase: ");
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", tolower(text[i]));
    }
    printf("\n");

    return 0;
}
