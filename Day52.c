#include <stdio.h>

int main() {
    int n, i, x;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);

    int idx = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            idx = i;
            break;
        }
    }
    printf("%d\n", idx);
    return 0;
}
