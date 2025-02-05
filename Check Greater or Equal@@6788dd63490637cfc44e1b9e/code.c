#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Check if num1 is greater than or equal to num2
    if (num1 >= num2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}