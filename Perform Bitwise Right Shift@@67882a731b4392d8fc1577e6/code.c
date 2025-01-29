#include <stdio.h>
int main() {
    int a,b;
    scnaf("%d %d",&a,&b);
    int result=a<<b;
    printf("%d",result);
    return 0;
}