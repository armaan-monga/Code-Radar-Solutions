#include <stdio.h>
int main() {
    char n[100];
    fgets(n,100,stdin);
    printf("You enetered: %s",n)
    return 0;
}