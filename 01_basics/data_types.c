#include <stdio.h>
#include <stdbool.h>

// INTRO:
// A data type tells the compiler what kind of value a variable stores and how much memory it needs.
// The types used most often in C are:
//
//   char    - a single character, written in single quotes    (usually 1 byte)
//   int     - a whole number                                  (usually 4 bytes)
//   float   - a decimal number, single precision              (usually 4 bytes)
//   double  - a decimal number, double precision              (usually 8 bytes)
//   bool    - true or false, needs <stdbool.h>                (usually 1 byte)
//   void    - "no value at all", used for functions that return nothing
//
// The integer types can also be combined with short, long, and unsigned,
// for example: short int, long int, and unsigned int.

// SYNTAX:
// char   variable = 'A';
// int    variable = 0;
// float  variable = 0.0f;
// double variable = 0.0;
// bool   variable = true;
// void   function_name(void);   // a function that returns no value


int main(void) {

    char grade = 'A';
    int age = 18;
    float height = 1.80f;
    double pi = 3.141592653589793;
    bool passed = true;
    const int maxScore = 100;   // const means the value cannot be changed later
    char name[] = "Gaurav";     // a string is an array of char

    printf("Grade:     %c\n", grade);
    printf("Age:       %d\n", age);
    printf("Height:    %.2f\n", height);
    printf("Pi:        %.15f\n", pi);
    printf("Passed:    %d\n", passed);   // a bool prints as 1 (true) or 0 (false)
    printf("Max score: %d\n", maxScore);
    printf("Name:      %s\n", name);

    return 0;
}
