#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int min = 100;
    int max = 200;
    int random = 0;

    // srand sets the starting point for rand. Seeding it with the current time
    // makes the program produce a different number each time it runs.
    srand((unsigned int) time(NULL));

    random = rand() % (max - min + 1) + min;
    printf("Random number between %d and %d: %d\n", min, max, random);

    return 0;
}
