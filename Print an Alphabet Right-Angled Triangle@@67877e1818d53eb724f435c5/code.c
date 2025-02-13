#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            printf("%char ",ch);
        }printf("\n");
    }
    return 0;

}