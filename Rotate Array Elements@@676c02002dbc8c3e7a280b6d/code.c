#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int a[1000], n, k, i;
    
    // Input size of array
    scanf("%d", &n);
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Input number of rotations
    scanf("%d", &k);
    
    // Optimize k to avoid unnecessary rotations
    k = k % n;
    
    // Step 1: Reverse the entire array
    reverse(a, 0, n - 1);
    
    // Step 2: Reverse the first k elements
    reverse(a, 0, k - 1);
    
    // Step 3: Reverse the remaining n-k elements
    reverse(a, k, n - 1);
    
    // Output the rotated array
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
