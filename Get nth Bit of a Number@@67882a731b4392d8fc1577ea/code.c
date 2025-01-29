#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int n = (a>>b) & 1;
    printf("%d",n);
    return 0;
}