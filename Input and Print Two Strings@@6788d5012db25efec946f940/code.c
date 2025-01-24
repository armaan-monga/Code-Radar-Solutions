#include <stdio.h>
int main() {
    char str[100];
    printf("");
    fgets(str,100,stdin);
    printf("You entered: %s",str);
    return 0;
}