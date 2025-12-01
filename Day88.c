#include <stdio.h>

enum Values {X, Y, Z, W};

int main() {
    for (int i = X; i <= W; i++)
        printf("%d ", i);
    return 0;
}
