#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if(islower(a)){
        printf("Lowercase");
    }if(isupper(a)){
        printf("Uppercase");
    }
    return 0;
}