#include <stdio.h>

void checkBalance(float balance);
float depositMoney(void);
float withdrawMoney(float balance);

int main(void) {

    int choice = 0;
    float balance = 0.0f;

    printf("====== WELCOME TO THE BANK ======\n\n");

    do {

        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit / Quit\n\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            int discarded;
            while ((discarded = getchar()) != '\n' && discarded != EOF) {
                // throw away the rest of the invalid input
            }
            printf("\nPlease enter a number.\n\n");
            continue;
        }

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += depositMoney();
                break;
            case 3:
                // The withdrawn amount has to be subtracted from the balance,
                // otherwise the balance would never change.
                balance -= withdrawMoney(balance);
                break;
            case 4:
                printf("\nOkay, have a good day!\n\n");
                break;
            default:
                printf("\nInvalid choice.\n\n");
                break;
        }

    } while (choice != 4);

    return 0;
}

void checkBalance(float balance) {
    printf("\nYour balance is $%.2f\n\n", balance);
}

float depositMoney(void) {

    float amount = 0.0f;

    printf("\nEnter the amount you want to deposit: $");

    // Returning 0 for anything invalid keeps the balance unchanged.
    if (scanf("%f", &amount) != 1) {
        int discarded;
        while ((discarded = getchar()) != '\n' && discarded != EOF) {
            // throw away the rest of the invalid input
        }
        printf("That is not a valid amount.\n\n");
        return 0.0f;
    }

    if (amount <= 0) {
        printf("Invalid amount.\n\n");
        return 0.0f;
    }

    printf("The amount $%.2f has been successfully deposited to your account.\n\n", amount);

    return amount;
}

float withdrawMoney(float balance) {

    float amount = 0.0f;

    printf("\nEnter the amount you want to withdraw: $");

    if (scanf("%f", &amount) != 1) {
        int discarded;
        while ((discarded = getchar()) != '\n' && discarded != EOF) {
            // throw away the rest of the invalid input
        }
        printf("That is not a valid amount.\n\n");
        return 0.0f;
    }

    if (amount <= 0) {
        printf("Invalid amount.\n\n");
        return 0.0f;
    }

    if (amount > balance) {
        printf("Insufficient funds.\n\n");
        return 0.0f;
    }

    printf("The amount $%.2f has been successfully withdrawn from your account.\n\n", amount);

    return amount;
}
