#include<stdio.h>
int main(){
    int n,oddcount=0,evencount=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]); 
    }for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }else{oddcount++;}
    }printf("%d ",evencount);
    printf("%d",oddcount);

    return 0;
}
