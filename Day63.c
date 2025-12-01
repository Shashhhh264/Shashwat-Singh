#include <stdio.h>

void sort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[j] < a[i]) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
}

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k); // 1-based

    sort(arr, n);

    if (k < 1 || k > n) {
        printf("-1\n");
    } else {
        printf("%d\n", arr[k - 1]);
    }
    return 0;
}
