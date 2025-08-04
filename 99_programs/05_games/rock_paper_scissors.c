#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice(void);
int getUserChoice(void);
void printChoice(char player[], int choice);
void checkWinner(int userChoice, int computerChoice);

int main(void) {

    srand((unsigned int) time(NULL));

    printf("===== ROCK - PAPER - SCISSORS =====\n\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    printf("\n");
    printChoice("You", userChoice);
    printChoice("Computer", computerChoice);

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice(void) {
    return (rand() % 3) + 1;
}

int getUserChoice(void) {

    int choice = 0;

    do {
        printf("Choose an option\n\n");
        printf("1. ROCK\n2. PAPER\n3. SCISSORS\n\n");
        printf("Enter your choice: ");

        // Text typed instead of a number would otherwise repeat forever.
        if (scanf("%d", &choice) != 1) {
            int discarded;
            while ((discarded = getchar()) != '\n' && discarded != EOF) {
                // throw away the rest of the invalid input
            }
            choice = 0;
            printf("\nPlease enter a number.\n\n");
        }

    } while (choice < 1 || choice > 3);

    return choice;
}

void printChoice(char player[], int choice) {

    switch (choice) {
        case 1:
            printf("%s chose ROCK!\n", player);
            break;
        case 2:
            printf("%s chose PAPER!\n", player);
            break;
        case 3:
            printf("%s chose SCISSORS!\n", player);
            break;
        default:
            printf("%s made an unknown choice.\n", player);
            break;
    }
}

void checkWinner(int userChoice, int computerChoice) {

    // 1 = rock, 2 = paper, 3 = scissors.
    // Rock beats scissors, paper beats rock, and scissors beat paper.
    if (userChoice == computerChoice) {
        printf("\nIt's a TIE!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
        printf("\nYou WIN!\n");
    }
    else {
        printf("\nYou LOSE!\n");
    }
}
