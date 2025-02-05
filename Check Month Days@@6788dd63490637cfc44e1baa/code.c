#include <stdio.h>

int main() {
    int month;

    // Prompt the user to enter the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Check if the input is valid (between 1 and 12)
    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 1; // Indicate an error
    }

    // Use a switch statement to determine the number of days
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            printf("31\n");
            break;
        case 2: // February (assuming 28 days)
            printf("28\n");
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("30\n");
            break;
    }

    return 0; // Indicate successful execution
}