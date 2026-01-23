#include <stdio.h>
#include <stdint.h>  // For uintptr_t
#include <inttypes.h> // For PRIuPTR
#include <stdlib.h>

// Function to print an integer in binary
void print_binary(uintptr_t value) {
    int bits = sizeof(uintptr_t) * 8; // Number of bits in pointer
    int leading = 1; // To skip leading zeros

    for (int i = bits - 1; i >= 0; i--) {
        int bit = (value >> i) & 1;
        if (bit) leading = 0; // Found first 1
        if (!leading) {
            putchar(bit ? '1' : '0');
        }
    }
    if (leading) putchar('0'); // If value was 0
}

int main(void) {
    int x = 42;
    int *ptr = &x;

    // Convert pointer to integer type for binary printing
    uintptr_t addr = (uintptr_t)ptr;

    printf("Pointer address in binary: ");
    print_binary(addr);
    putchar('\n');
    printf("Pointer address in hex: %p\n", (void *)ptr);
    printf("Pointer address in decimal: %" PRIuPTR "\n", addr);

    return 0;
}

