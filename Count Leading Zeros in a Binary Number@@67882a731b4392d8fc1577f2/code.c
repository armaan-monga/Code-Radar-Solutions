#include <stdio.h>

int main() {
    unsigned int num; // Use unsigned int for 32-bit number
    scanf("%u", &num);

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) { // Check if the i-th bit is 1
            break; // Stop counting zeros once a 1 is encountered
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}