#include <stdio.h>
#include <string.h>

int main(void) {

    char item[50] = "";
    float price = 0.00f;
    int quantity = 0;
    float total = 0.00f;

    printf("Hi. What would you like to purchase?: ");
    if (fgets(item, sizeof(item), stdin) == NULL) {
        printf("Could not read the item name.\n");
        return 1;
    }
    item[strcspn(item, "\n")] = '\0';

    printf("How much does it cost each?: ");
    if (scanf("%f", &price) != 1 || price < 0) {
        printf("Please enter a price of zero or more.\n");
        return 1;
    }

    printf("How many of them?: ");
    if (scanf("%d", &quantity) != 1 || quantity < 0) {
        printf("Please enter a quantity of zero or more.\n");
        return 1;
    }

    total = price * quantity;

    printf("\nYour total for %d x %s will be $%.2f\n", quantity, item, total);

    return 0;
}
