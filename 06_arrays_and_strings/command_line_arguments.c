#include <stdio.h>

// INTRO:
// A program can be given values on the command line when it is started.
// To read them, main is written with two parameters instead of void:
//
//   argc - the argument count, which is always at least 1
//   argv - the argument values, an array of strings
//
// argv[0] is the name the program was started with, so the first value typed by
// the user is argv[1] and the last one is argv[argc - 1].
// Arguments always arrive as text, so a number has to be converted with atoi
// from <stdlib.h> before it can be used in a calculation.
//
// The * in char *argv[] marks an array of strings and is explained in 08_pointers.

// SYNTAX:
// int main(int argc, char *argv[]) {
//     // argv[0]                     the program name
//     // argv[1] ... argv[argc - 1]  the arguments
// }

// Try it with:
//   gcc command_line_arguments.c -o args
//   ./args hello world 123


int main(int argc, char *argv[]) {

    printf("Argument count (argc): %d\n\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    if (argc < 2) {
        printf("\nNo arguments were given this time.\n");
        printf("Run the program again with some words after its name.\n");
    }
    else {
        printf("\nThe first argument you typed is: %s\n", argv[1]);
        printf("You typed %d argument(s) in total.\n", argc - 1);
    }

    return 0;
}
