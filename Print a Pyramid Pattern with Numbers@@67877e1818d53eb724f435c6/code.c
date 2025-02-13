#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Controls rows
        for (int space = 1; space <= n - i; space++) {  // Prints spaces
            printf(" ");
        }
        for (int num = 1; num <= 2 * i - 1; num++) {  // Prints numbers
            printf("%d", num);
            if (num < 2 * i - 1) {  // Avoids extra space after last number
                printf(" ");
            }
        }
        printf("\n");  // Moves to next line
    }

    return 0;
}
