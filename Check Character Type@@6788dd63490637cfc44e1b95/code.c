#include <stdio.h>
#include <ctype.h>

int main() {
    char n;
    
    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &n);

    // Check if it's a digit
    if (isdigit(n)) {
        printf("Digit\n");
    } 
    // Check if it's a vowel (both uppercase and lowercase)
    else if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || 
             n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
        printf("Vowel\n");
    } 
    // Check if it's an alphabetic letter (consonant case)
    else if (isalpha(n)) {
        printf("Consonant\n");
    } 
    // If not a digit or letter, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
