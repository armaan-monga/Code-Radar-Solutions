#include <stdio.h>

int main() {
    int a, b;

    // Input the two numbers
    // Match input format from the image
    scanf("%d %d", &a, &b);  // Read two integers separated by space

    // Swap using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Output the swapped values
    printf("\nOutput\n"); // Match output format from the image
    printf("%d %d\n", a, b); // Print the swapped values separated by space

    return 0;
}