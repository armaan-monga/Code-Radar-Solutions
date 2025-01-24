#include <stdio.h>
int main() {
    char n[100];
    fgets(n,sizeof(n),stdin);
    printf("You entered: %s",n);
    return 0;
}