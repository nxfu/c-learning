#include <stdio.h>
#include <string.h>

int checkAge(int age, char name[]) {
    if (age >= 18) {
        printf("Hi, %s. Welcome!\n", name);
        return 1;
    }

    return 0;
}

int main(void) {

    int age = 0;
    char name[50] = "";

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Could not read the name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("That is not a valid age.\n");
        return 1;
    }

    if (checkAge(age, name)) {
        printf("Access allowed.\n");
    }
    else {
        printf("Access denied. You must be 18 or older.\n");
    }

    return 0;
}
