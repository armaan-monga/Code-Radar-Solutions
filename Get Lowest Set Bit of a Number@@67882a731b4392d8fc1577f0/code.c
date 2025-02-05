#include <stdio.h>

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Find the position of the lowest set bit
    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1; // Right shift the number (divide by 2)
        position++;
    }

    printf("%d\n", position);

    return 0;
}