#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1; // Right shift (divide by 2)
    }

    printf("%d\n", count);

    return 0;
}