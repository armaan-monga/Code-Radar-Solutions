#include <stdio.h>
#include<math.h>
int main(){
    float x;
    if(scanf("%f",&x)!=1){
        return 1;}
    printf("You entered: %.4f",x);
    return 0;
}