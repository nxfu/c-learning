#include <stdio.h>

// INTRO:
// Bitwise operators work on the individual bits of a whole number:
//
//   &   AND          a bit is 1 only when both bits are 1
//   |   OR           a bit is 1 when at least one bit is 1
//   ^   XOR          a bit is 1 when the two bits are different
//   ~   NOT          flips every bit
//   <<  left shift   moves bits to the left, doubling the value each step
//   >>  right shift  moves bits to the right, halving the value each step
//
// These are not the same as && and ||, which work on whole true or false values.

// SYNTAX:
// result = operand1 & operand2;
// result = operand1 | operand2;
// result = operand1 ^ operand2;
// result = ~operand;
// result = operand << positions;
// result = operand >> positions;


int main(void) {

    int first = 12;    // binary 1100
    int second = 10;   // binary 1010

    printf("first  = %d  (binary 1100)\n", first);
    printf("second = %d  (binary 1010)\n\n", second);

    printf("first & second = %2d  (binary 1000)\n", first & second);
    printf("first | second = %2d  (binary 1110)\n", first | second);
    printf("first ^ second = %2d  (binary 0110)\n", first ^ second);
    printf("~first         = %2d  (every bit flipped)\n", ~first);

    printf("\nfirst << 1     = %2d  (12 doubled)\n", first << 1);
    printf("first >> 2     = %2d  (12 halved twice)\n", first >> 2);

    // The last bit of an odd number is always 1, so & 1 is a quick even/odd test.
    printf("\n%d is %s\n", first, (first & 1) ? "odd" : "even");
    printf("%d is %s\n", 7, (7 & 1) ? "odd" : "even");

    return 0;
}
