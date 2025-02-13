#include <stdio.h>

int main() {
    int n;

    // Input the side length of the square
    printf("Input\n");
    scanf("%d", &n);

    // Print the hollow square pattern of stars
    printf("Output\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}