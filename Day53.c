#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int total = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int leftSum = 0, ans = -1;
    for (i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            ans = i;
            break;      
        }
        leftSum += arr[i];
    }
    printf("%d\n", ans);
    return 0;
}
