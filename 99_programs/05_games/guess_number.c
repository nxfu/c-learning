#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = 0;

    srand((unsigned int) time(NULL));
    answer = rand() % (max - min + 1) + min;

    printf("===== GUESS THE NUMBER =====\n\n");
    printf("I picked a number between %d and %d.\n\n", min, max);

    do {
        printf("Enter your guess: ");

        // Without this check, text typed instead of a number would stay in the
        // input and the loop would repeat forever.
        if (scanf("%d", &guess) != 1) {
            int discarded;
            while ((discarded = getchar()) != '\n' && discarded != EOF) {
                // throw away the rest of the invalid input
            }
            printf("Please enter a number.\n");
            continue;
        }

        tries++;

        if (guess > answer) {
            printf("Too high!\n");
        }
        else if (guess < answer) {
            printf("Too low!\n");
        }
        else {
            printf("\nCORRECT!\n");
        }

    } while (guess != answer);

    printf("The answer is %d. You guessed it in %d tries.\n", answer, tries);

    return 0;
}
