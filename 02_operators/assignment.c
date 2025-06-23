#include <stdio.h>

// INTRO:
// Assignment operators store or update a value in a variable.
// The compound operators combine an arithmetic operation with the assignment:
//
//   =   assign                  variable = 5;    stores 5
//   +=  add and assign          variable += 5;   same as variable = variable + 5
//   -=  subtract and assign     variable -= 5;   same as variable = variable - 5
//   *=  multiply and assign     variable *= 5;   same as variable = variable * 5
//   /=  divide and assign       variable /= 5;   same as variable = variable / 5
//   %=  remainder and assign    variable %= 5;   same as variable = variable % 5

// SYNTAX:
// variable = value;
// variable += value;
// variable -= value;
// variable *= value;
// variable /= value;
// variable %= value;


int main(void) {

    int number = 10;
    printf("Start:      %d\n", number);

    number += 5;
    printf("After += 5: %d\n", number);

    number -= 3;
    printf("After -= 3: %d\n", number);

    number *= 4;
    printf("After *= 4: %d\n", number);

    number /= 2;
    printf("After /= 2: %d\n", number);

    number %= 7;
    printf("After %%= 7: %d\n", number);

    return 0;
}
