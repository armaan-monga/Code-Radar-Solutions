#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);



    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++) {

        // Print leading spaces (for alignment)
        for (int space = 1; space <= n - i; space++) {
            printf("  "); // Two spaces for better spacing
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers (excluding the peak)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}