#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int n, i, arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (isSorted(arr, n)) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}
