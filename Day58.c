#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    long long prefix[n], suffix[n], ans[n];

    prefix[0] = 1;
    for (i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * nums[i - 1];

    suffix[n - 1] = 1;
    for (i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * nums[i + 1];

    for (i = 0; i < n; i++)
        ans[i] = prefix[i] * suffix[i];

    for (i = 0; i < n; i++) {
        printf("%lld", ans[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
