#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isSquareOfAnother(int num1, int num2) {
    // Check if num1 is non-negative, as squares can't be negative
    if (num1 < 0) {
        return false;
    }
    
    // Calculate the square of num2
    int squareOfNum2 = num2 * num2; 

    // Check if the square of num2 is equal to num1
    if (squareOfNum2 == num1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num1, num2;

    // Read two space-separated integers from the input
    scanf("%d %d", &num1, &num2);

    // Check if num1 is the square of num2 and print the result
    if (isSquareOfAnother(num1, num2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}