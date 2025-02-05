#include <stdio.h>
#include<ctype.h>
int main() {
    char n;
    scanf("%c",&n);
    if(isdigit(n)){
        printf("Digit");}
    else if(n=='a' || n=='e'||n=='i'||n=='o'||n=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    else{
        printf("Special Character");
    
    return 0;
}