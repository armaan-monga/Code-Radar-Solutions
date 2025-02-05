#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Compare the numbers
    if (num1 == num2) {
        printf("Equal\n");
    } else if (num1 > num2) {
        printf("First\n");
    } else {
        printf("Second\n");
    }

    return 0;
}