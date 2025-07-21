#include <stdio.h>

int main(void) {

    char questions[][100] = {
        "Which planet is known as the Red Planet?",
        "What is the largest planet in our solar system?",
        "What is the name of Earth's natural satellite?",
        "Which galaxy contains our solar system?"
    };

    char options[][100] = {
        "A. Venus", "B. Mars", "C. Jupiter", "D. Saturn",
        "A. Earth", "B. Saturn", "C. Jupiter", "D. Neptune",
        "A. The Moon", "B. Europa", "C. Titan", "D. Phobos",
        "A. Andromeda", "B. Sombrero", "C. Milky Way", "D. Whirlpool"
    };

    char answers[] = {'B', 'C', 'A', 'C'};
    int score = 0;
    int questionCount = sizeof(questions) / sizeof(questions[0]);
    int optionCount = 4;

    printf("===== SPACE QUIZ GAME =====\n");

    for (int i = 0; i < questionCount; i++) {
        char guess = '\0';

        printf("\n%s\n\n", questions[i]);
        for (int j = 0; j < optionCount; j++) {
            printf("%s\n", options[i * optionCount + j]);
        }

        printf("\n> Enter your answer: ");
        if (scanf(" %c", &guess) != 1) {
            printf("\nNo answer received. Ending the quiz.\n");
            return 1;
        }

        // Accept both an uppercase and a lowercase letter.
        if (guess == answers[i] || guess == answers[i] + ('a' - 'A')) {
            printf("\nCORRECT!\n");
            score++;
        }
        else {
            printf("\nINCORRECT. The answer is %c.\n", answers[i]);
        }
    }

    printf("\nFinal score: %d/%d\n", score, questionCount);
    printf("Thank you for playing :)\n");

    return 0;
}
