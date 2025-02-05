#include <stdio.h>

int main() {
    int age;

    // Input the age
    scanf("%d", &age);

    // Check if eligible for senior citizen discount
    if (age >= 60) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}