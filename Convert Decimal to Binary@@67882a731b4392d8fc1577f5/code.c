#include <stdio.h>

int main() {
    int decimal_num;
    scanf("%d", &decimal_num);

    // Handle the case where the input is 0
    if (decimal_num == 0) {
        printf("0\n");
        return 0;
    }

    int binary_num; // Array to store binary digits (assuming 32-bit integer)
    int i = 0;

    while (decimal_num > 0) {
        binary_num[i] = decimal_num & 1; // Get the last bit (remainder when divided by 2)
        decimal_num >>= 1; // Right shift (divide by 2)
        i++;
    }

    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_num[j]);
    }
    printf("\n");

    return 0;
}