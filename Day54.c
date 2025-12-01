#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x, ans = -1;
    long long total = (long long)n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        long long left = (long long)x * (x + 1) / 2;
        long long right = total - (long long)(x - 1) * x / 2;
        if (left == right) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
