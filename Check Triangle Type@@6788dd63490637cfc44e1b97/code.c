#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // Check the type of triangle
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}