#include <stdio.h>

int main() {
    int decimal;

    // Input the decimal number // Match input format from the image
    scanf("%d", &decimal);
 // Match output format from the image

    // Handle the case where the input is 0
    if (decimal == 0) {
        printf("0\n");
        return 0;
    }

    // Array to store the binary digits
    int binary; // Assuming a 32-bit integer

    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2; // Get the remainder (0 or 1)
        decimal = decimal / 2;   // Integer division by 2
        i++;
    }

    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}