#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k > n) {
        printf("0\n");
        return 0;
    }

    int currSum = 0;
    for (i = 0; i < k; i++)
        currSum += arr[i];

    int maxSum = currSum;

    for (i = k; i < n; i++) {
        currSum += arr[i] - arr[i - k];
        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
