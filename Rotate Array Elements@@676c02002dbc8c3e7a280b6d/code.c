#include<stdio.h>

int main(){
    int a[1000],n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int temp=a[n-1];
    for(i=0;i>=1;i--){
        a[i]=a[i-1];
    }a[i]=temp;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}