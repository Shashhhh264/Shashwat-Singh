#include <stdio.h>

struct Data {
    int a;
    float b;
};

int main() {
    struct Data d, *ptr;

    ptr = &d;

    scanf("%d", &ptr->a);
    scanf("%f", &ptr->b);

    printf("%d %.2f\n", ptr->a, ptr->b);

    return 0;
}
