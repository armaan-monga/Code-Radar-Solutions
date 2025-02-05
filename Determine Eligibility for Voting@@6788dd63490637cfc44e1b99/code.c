#include <stdio.h>

int main() {
    int age;

    // Input the age
    scanf("%d", &age);

    // Check if eligible to vote
    if (age >= 18) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}