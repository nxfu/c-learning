#include <stdio.h>
#include <string.h>

// INTRO:
// A void function performs an action but does not return a value.
// A function is usually declared before main so the compiler knows it exists,
// and then defined with its full body after main.

// SYNTAX:
// void function_name(parameter_type parameter);   // declaration (prototype)
//
// void function_name(parameter_type parameter) {  // definition
//     // code block to be executed
// }
//
// function_name(argument);                        // call


void greet(char name[]);

int main(void) {

    char name[20] = "";

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Could not read the name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';   // remove the newline kept by fgets

    greet(name);

    return 0;
}

void greet(char name[]) {
    printf("\nHello, %s! Nice to meet you.\n", name);
}
