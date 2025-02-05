#include <stdio.h>

int main() {
    int num;

    // Input the number
    // Match input format from the image
    scanf("%d", &num);

    // Check if the number is in the range 1 to 100 (inclusive)
    if (num >= 1 && num <= 100) {
        // Match output format from the image
        printf("In Range\n");
    } else {
       // Match output format from the image
        printf("Out of Range\n");
    }

    return 0;
}