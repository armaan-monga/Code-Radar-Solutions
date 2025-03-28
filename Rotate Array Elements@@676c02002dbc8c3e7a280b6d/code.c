#include<stdio.h>

int main(){
    int arr[],n,k;
    scanf("%d",&n);
    for(int i=0,i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int temp=a[0];
    for(int i=0;i=n-1;i++){
        a[i]=a[i+1];
    }a[i]=temp;
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}