#include <stdio.h>

int main() {
    int decimal;

    
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("0\n");
        return 0;
    }

    int started = 0; // Flag to track if we've started printing 1s

    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;

        if (bit == 1) {
            printf("%d", bit);
            started = 1; // Set the flag
        } else if (started == 1) { // Print 0s only AFTER we've started printing 1s
            printf("%d", bit);
        }
        // If the number is not 0, we don't print zeros before the first 1.
    }
    printf("\n");

    return 0;
}