#include <stdio.h>
#include <stdlib.h>

int main() {
    // usage of unsigned and signed chars
    unsigned char u_char_1 = 125;
    unsigned char u_char_2 = 125;
    signed char s_char = -5;    
    printf("Unsigned char: %u\n", u_char_1);
    printf("Signed char: %d\n", s_char);
    // print their binary representations
    printf("Unsigned char in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%u", (u_char_1   >> i) & 1);
    }
    printf("\n");
    printf("Signed char in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%u", (s_char >> i) & 1);
    }
    printf("\n");

    // demonstrate overflow with unsigned char
    unsigned char u_overflow = 255; // max value for unsigned char
    printf("Unsigned char before overflow: %u\n", u_overflow);
    u_overflow += 1; // this will cause overflow
    printf("Unsigned char after overflow: %u\n", u_overflow);   

    // sum of two unsigned chars
    signed char u_sum = u_char_1 + u_char_2;
    printf("Sum of two unsigned chars (150 + 150): %d\n", u_sum);
    return 0;

}