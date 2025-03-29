// #include<stdio.h>
// int main(){
//     int n,count[];
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]); 
//     }

//     return 0;
// }
#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("%d ", evenCount);
    printf("%d", oddCount);
}

int main() {
    int n;

    
    scanf("%d", &n);

    int arr[n]; // Declare the array

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n);

    return 0;
}
