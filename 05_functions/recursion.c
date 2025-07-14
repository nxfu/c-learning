#include <stdio.h>

// INTRO:
// Recursion is a function that calls itself to solve a smaller version of the same problem.
// Every recursive function needs two parts:
//
//   base case      - the condition that stops the calls
//   recursive case - the call that moves closer to the base case
//
// Without a base case the calls never stop and the program eventually crashes.
// Anything written with recursion can also be written with a loop; recursion just
// fits some problems more naturally.

// SYNTAX:
// return_type function_name(parameter) {
//     if (base_condition) {
//         return value;                          // stop here
//     }
//     return function_name(smaller_parameter);   // keep going
// }


int factorial(int number);
void countdown(int number);

int main(void) {

    printf("factorial(5) = %d\n", factorial(5));
    printf("factorial(1) = %d\n", factorial(1));

    printf("\nCountdown from 5:\n");
    countdown(5);

    return 0;
}

// 5! is 5 * 4 * 3 * 2 * 1, which is the same as 5 * factorial(4).
int factorial(int number) {

    if (number <= 1) {
        return 1;                               // base case
    }

    return number * factorial(number - 1);      // recursive case
}

// The same idea without a return value.
void countdown(int number) {

    if (number == 0) {
        printf("Liftoff!\n");
        return;                     // base case: stop calling
    }

    printf("%d\n", number);
    countdown(number - 1);          // recursive case
}

// The loop version of factorial, for comparison:
//
// int factorial(int number) {
//     int result = 1;
//     for (int i = 2; i <= number; i++) {
//         result *= i;
//     }
//     return result;
// }
