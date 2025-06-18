#include <stdio.h>

// INTRO:
// printf displays formatted text and values in the terminal.
// Every format specifier inside the text is replaced by one of the values listed after it.
//
// Common format specifiers:
//   %d   int                      %f   float or double
//   %c   char                     %s   string (char array)
//   %lf  double                   %%   a literal percent sign
//   %.2f a decimal number rounded to 2 places
//
// Common escape sequences:
//   \n   new line                 \t   tab
//   \\   backslash                \"   double quote

// SYNTAX:
// printf("text to display\n");
// printf("format string", value1, value2);


int main(void) {

    char grade = 'A';
    int items = 3;
    float price = 9.50f;
    char name[] = "Gaurav";

    printf("This is printed with printf.\n\n");

    printf("Name:\t%s\n", name);
    printf("Grade:\t%c\n", grade);
    printf("Items:\t%d\n", items);
    printf("Price:\t%.2f\n", price);
    printf("Total:\t%.2f\n", items * price);
    printf("Discount: 10%%\n");

    return 0;
}
