#include <stdio.h>

int main() {
    int n;

    // Input the number of rows
    // Match prompt's input format
    scanf("%d", &n);

     // Match prompt's output format

    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++) {

        // Print leading spaces (for alignment)
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print stars for each row
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}