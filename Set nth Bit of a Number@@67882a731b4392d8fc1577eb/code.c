#include <stdio.h>

int main() {
    int number, n;

    // Input the number and the bit position
    // Match input format from the image
    scanf("%d %d", &number, &n); // Read two integers

    // Set the nth bit using the bitwise OR operator
    int updated_number = number | (1 << n);

    // Output the updated number
    // Match output format from the image
    printf("%d\n", updated_number);

    return 0;
}