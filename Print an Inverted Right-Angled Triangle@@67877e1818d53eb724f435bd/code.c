#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("*");
    }
    if(n==2){
        printf("* *\n");
        printf("*");
    }
    return 0;
}