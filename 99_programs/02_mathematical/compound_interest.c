#include <stdio.h>
#include <math.h>

// Compound interest formula: A = P * (1 + r/n)^(n*t)
// Compile on Linux and macOS with: gcc compound_interest.c -o compound_interest -lm

int main(void) {

    double principalAmount = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Enter the principal amount (p): ");
    if (scanf("%lf", &principalAmount) != 1 || principalAmount <= 0) {
        printf("Please enter a principal amount greater than zero.\n");
        return 1;
    }

    printf("Enter the rate of interest as a percentage (r): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Please enter a rate of zero or more.\n");
        return 1;
    }
    rate = rate / 100;   // OR rate /= 100.0;

    printf("Enter the number of years (t): ");
    if (scanf("%d", &years) != 1 || years <= 0) {
        printf("Please enter a number of years greater than zero.\n");
        return 1;
    }

    printf("Enter the number of times compounded per year (n): ");
    if (scanf("%d", &timesCompounded) != 1 || timesCompounded <= 0) {
        printf("Please enter a value greater than zero.\n");
        return 1;
    }

    total = principalAmount * pow(1 + rate / timesCompounded, (double) timesCompounded * years);

    printf("\nAfter %d years, compounded %d times per year, the maturity amount would be $%.2lf\n",
           years, timesCompounded, total);

    return 0;
}
