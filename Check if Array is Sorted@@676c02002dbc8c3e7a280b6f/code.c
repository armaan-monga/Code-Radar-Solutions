#include <stdio.h>

int main() {
    int n,sorted = 1; 
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=0;
        }
    }
    if(sorted){
        printf("Sorted");
    }else{printf("Not Sorted");}
    return 0;
}
