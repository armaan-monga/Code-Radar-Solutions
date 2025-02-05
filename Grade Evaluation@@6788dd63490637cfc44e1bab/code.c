#include <stdio.h>

int main() {
    char grade;

    // Prompt the user to enter the grade
    
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline

    // Use a switch statement to determine the description
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0; // Indicate successful execution
}