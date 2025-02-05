#include <stdio.h>

int main() {
    int age, isCitizen;

    // Read age and citizenship status from input
    scanf("%d %d", &age, &isCitizen);

    // Check voting eligibility
    if (age >= 18 && isCitizen == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}