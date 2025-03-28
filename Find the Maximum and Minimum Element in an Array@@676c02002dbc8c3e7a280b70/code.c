#include<stdio.h>
void findmaxmin(inr arr[],int *max,int *min,int n){
    *min=*max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]< *min){
            min=arr[i];
        }if(arr[i]> *max){
            max=arr[i];
        }
    }
}
int main(){
    int n,arr[1000],min,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findmaxmin(arr,min,max,n);
    printf("%d",min);
    printf("%d",max);
    return 0;
}