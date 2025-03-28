
#include <stdio.h>

int main() {
    int a[1000], n, k, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    k = k % n;
    for (i = 0; i < k; i++) {
        int temp = a[n - 1];
        for (i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
