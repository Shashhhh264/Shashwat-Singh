#include <stdio.h>

int main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k > n) return 0;

    for (i = 0; i <= n - k; i++) {
        int mx = arr[i];
        for (j = i + 1; j < i + k; j++)
            if (arr[j] > mx) mx = arr[j];
        printf("%d", mx);
        if (i != n - k) printf(" ");
    }
    printf("\n");
    return 0;
}
