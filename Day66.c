#include <stdio.h>

int main() {
    int n, target, i, j;
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    scanf("%d", &target);

    int i1 = -1, i2 = -1;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                i1 = i;
                i2 = j;
                break;
            }
        }
        if (i1 != -1) break;
    }

    printf("%d %d\n", i1, i2);
    return 0;
}
