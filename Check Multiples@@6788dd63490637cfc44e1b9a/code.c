#include <stdio.h>

int main() {
    int num, divisor;

    // Input the two numbers
    scanf("%d %d", &num, &divisor);

    // Check if num is a multiple of divisor
    if (num % divisor == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}