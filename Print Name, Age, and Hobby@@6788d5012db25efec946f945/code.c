#include <stdio.h>
int main() {
    char a;
    int b;
    char c;
    printf("");
    scanf("%c %n &c",&a,&b,&c);
    printf("Name: %c Age: %n Hobby: %c",a,b,c);

    return 0;
}