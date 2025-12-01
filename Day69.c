#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorAll = 0;
    for (i = 0; i < n; i++)
        xorAll ^= arr[i];

    // numbers are from 1..(n-1) typically
    int xorRange = 0;
    for (i = 1; i <= n - 1; i++)
        xorRange ^= i;

    int repeated = xorAll ^ xorRange;
    printf("%d\n", repeated);
    return 0;
}
