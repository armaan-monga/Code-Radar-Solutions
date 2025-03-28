#include<stdio.h>
void findmaxmin(int arr[],int maxmin[],int n){
    maxmin[0]=maxmin[1]=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]< *maxmin){
            maxmin=arr[i];
        }if(arr[i]> *maxmin){
            maxmin=arr[i];
        }
    }
}
int main(){
    int n,arr[1000],maxmin;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findmaxmin(arr,maxmin,n);
    printf("%d",maxmin[0]);
    printf("%d",maxmin[1]);
    return 0;
}