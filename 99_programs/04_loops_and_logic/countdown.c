#include <stdio.h>
#include <windows.h>

// NOTE: This program uses Sleep from <windows.h>, so it only compiles on Windows.
// On Linux and macOS, use sleep(1) from <unistd.h> instead of Sleep(1000).

int main(void) {

    int i = 10;

    do {
        printf("%d\n", i);
        Sleep(1000);   // pause for 1 second (1000 milliseconds)
        i--;
    } while (i > 0);

    printf("\nHappy Birthday!\n");

    return 0;
}
