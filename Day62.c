#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0];
    int curr = arr[0];

    for (i = 1; i < n; i++) {
        if (curr < 0) curr = arr[i];
        else curr += arr[i];

        if (curr > maxSoFar) maxSoFar = curr;
    }

    printf("%d\n", maxSoFar);
    return 0;
}
