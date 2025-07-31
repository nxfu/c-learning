#include <stdio.h>
#include <unistd.h>

// INTRO:
// The unistd header provides POSIX operating-system functions on supported systems.
// It is available on Linux and macOS, but not on Windows, where <windows.h> is used instead.
//
// Common functions:
//   sleep(seconds)       - pause the program for a number of seconds
//   usleep(microseconds) - pause for a shorter time
//   getpid()             - the id of the running process

// SYNTAX:
// #include <unistd.h>
//
// sleep(1);        // pause for 1 second

// NOTE: This program only compiles on Linux and macOS.
// The Windows version of the same idea is in windows.c


int main(void) {

    printf("Process id: %d\n", (int) getpid());

    printf("\nCounting with a one second pause:\n");

    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
        fflush(stdout);   // show the number before the program pauses
        sleep(1);
    }

    printf("Done.\n");

    return 0;
}
