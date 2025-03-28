#include <stdio.h>

int main() {
    int a[1000], n, k, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    k = k % n;
    for (j = 0; j < k; j++) {
        int temp = a[0];
        for (i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
