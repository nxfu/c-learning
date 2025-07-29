#include <stdio.h>
#include <time.h>

// INTRO:
// The time header provides types and functions for measuring and working with time.
// Its most common beginner use is seeding random numbers so a program does not
// produce the same sequence every time it runs.
//
// Common names:
//   time_t               - a type that holds a point in time
//   time(NULL)           - the current time, in seconds
//   ctime(&variable)     - the time as readable text
//   difftime(end, start) - the difference between two times, in seconds
//   clock()              - processor time used by the program

// SYNTAX:
// #include <time.h>
//
// time_t now = time(NULL);
// srand((unsigned int) time(NULL));   // used together with rand from <stdlib.h>


int main(void) {

    time_t now = time(NULL);

    // A time_t counts the seconds since 1 January 1970.
    printf("Seconds since 1 January 1970: %ld\n", (long) now);

    // ctime needs the address of the variable, and its text already ends with a newline.
    printf("Current date and time: %s", ctime(&now));

    time_t inOneHour = now + 3600;
    printf("\nIn one hour it will be: %s", ctime(&inOneHour));

    // difftime returns the difference between two times as a double.
    printf("\nDifference between the two times: %.0f seconds\n", difftime(inOneHour, now));

    return 0;
}
