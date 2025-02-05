#include <stdio.h>
#include<ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    if(islower(a)){
        printf("Lowercase");
    }if(isupper(a)){
        printf("Uppercase");
    }
    return 0;
}