#include <stdio.h>
#include <windows.h>

// INTRO:
// The windows header provides Windows-specific types, constants, and functions.
// Code that includes it only compiles on Windows, so the POSIX <unistd.h> is the
// equivalent on Linux and macOS.
//
// Common functions:
//   Sleep(milliseconds)       - pause the program, note the capital S and milliseconds
//   Beep(frequency, duration) - play a simple tone
//   GetTickCount()            - milliseconds since the computer started
//   system("cls")             - clear the terminal (system comes from <stdlib.h>)

// SYNTAX:
// #include <windows.h>
//
// Sleep(1000);     // pause for 1 second (1000 milliseconds)

// NOTE: This program only compiles on Windows.
// The Linux and macOS version of the same idea is in unistd.c


int main(void) {

    printf("Counting with a one second pause:\n");

    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
        fflush(stdout);   // show the number before the program pauses
        Sleep(1000);      // Windows uses milliseconds, so 1000 means 1 second
    }

    printf("Done.\n");

    return 0;
}
