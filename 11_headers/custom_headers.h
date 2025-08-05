// INTRO:
// A custom header stores declarations that can be shared by multiple C source files.
// A header usually holds function declarations, type definitions, and constants, not the function bodies.
// The include guard (#ifndef / #define / #endif) stops the file from being included twice in one build.
// Custom headers are included with quotes, while standard headers are included with angle brackets.

// SYNTAX:
// #ifndef HEADER_NAME_H
// #define HEADER_NAME_H
//
// return_type function_name(parameter_type parameter);
//
// #endif
//
// #include "header_name.h"      // in the C file that uses it

#ifndef CUSTOM_HEADERS_H
#define CUSTOM_HEADERS_H

// #define creates a named constant that is shared by every file
// which includes this header.
#define APP_NAME "Custom Header Demo"
#define PI 3.14159265358979323846

// Function declarations only. The bodies are written in custom_headers.c
void greet(char name[]);
int addNumbers(int firstNumber, int secondNumber);
double circleArea(double radius);

#endif
