#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Controls the rows
        for (int space = 1; space <= n - i; space++) {  // Prints leading spaces
            printf("  "); // Two spaces for proper alignment
        }
        for (int num = 1; num <= 2 * i - 1; num++) {  // Prints numbers
            printf("%d ", num);
        }
        printf("\n");  // Moves to the next line
    }

    return 0;
}
