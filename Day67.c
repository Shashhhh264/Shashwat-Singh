#include <stdio.h>

int main() {
    int m, n, i, j, k;
    scanf("%d", &m);
    int a[m];
    for (i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    int b[n];
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    int res[m + n];
    i = j = k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];

    for (i = 0; i < m + n; i++) {
        printf("%d", res[i]);
        if (i != m + n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
