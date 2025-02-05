#include <stdio.h>

int main() {
    int decimal;

    printf("Input\n");
    scanf("%d", &decimal);

    printf("\nOutput\n");

    if (decimal == 0) {
        printf("0\n");
        return 0;
    }

    // No array needed now!

    // Iterate through the bits of the integer (assuming 32-bit)
    for (int i = 31; i >= 0; i--) {
        // Use bitwise AND to check if the i-th bit is set (1) or not (0)
        int bit = (decimal >> i) & 1;  // Right shift by i and then AND with 1

        // Print the bit only if we have encountered the first '1' 
        // OR if the number is 0 (handled earlier). This avoids leading zeros.
        if (bit == 1 || i == 0) {  // Print 0 only once if the number is 0.
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}