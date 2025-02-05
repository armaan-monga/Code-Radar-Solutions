#include <stdio.h>

int main() {
    char light;

    // Prompt the user to enter the traffic light color
    
    scanf(" %c", &light); // Note the space before %c to consume any leftover newline

    // Use a switch statement to determine the action
    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0; // Indicate successful execution
}