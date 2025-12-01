#include <stdio.h>

int main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        int firstNeg = 0; // 0 if not found
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d", firstNeg);
        if (i != n - k) printf(" ");
    }
    printf("\n");
    return 0;
}
