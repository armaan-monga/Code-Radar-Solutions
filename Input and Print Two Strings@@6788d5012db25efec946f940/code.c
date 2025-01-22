#include <stdio.h>
int main() {
    char n[100];
    fgets(n,sizeof(n),stdin);
    printf("You entered: ");
    puts(n);
    return 0;
}