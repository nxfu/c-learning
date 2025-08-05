#include <stdio.h>
#include "custom_headers.h"   // quotes: look in this folder first, then the system headers

// INTRO:
// This program uses the declarations from custom_headers.h.
// Because the header already declares the functions, they can be called from main
// even though their bodies are written further down the file.
//
// In a larger project the function bodies usually live in their own source file,
// and the files are compiled together:
//
//   gcc main.c helper.c -o program
//
// Here everything is kept in one file so it can be compiled with a single command:
//
//   gcc custom_headers.c -o custom_headers


int main(void) {

    printf("===== %s =====\n\n", APP_NAME);   // APP_NAME comes from the header

    greet("Gaurav");

    printf("2 + 3 = %d\n", addNumbers(2, 3));
    printf("Area of a circle with radius 2: %.2f\n", circleArea(2.0));

    return 0;
}

void greet(char name[]) {
    printf("Hello, %s! Nice to meet you.\n\n", name);
}

int addNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

double circleArea(double radius) {
    return PI * radius * radius;   // PI comes from the header
}
