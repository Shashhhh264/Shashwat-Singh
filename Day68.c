#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int x;
    int xorAll = 0;

    for (i = 0; i <= n; i++)
        xorAll ^= i;             // 0..n

    int xorArr = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        xorArr ^= x;
    }

    int missing = xorAll ^ xorArr;
    printf("%d\n", missing);
    return 0;
}
