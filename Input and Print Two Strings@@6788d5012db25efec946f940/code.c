#include <stdio.h>
int main() {
    char str[100];
    printf("");
    fgets(str,100,stdin);
    printf("You entered: %s and %s",str,str);
    return 0;
}