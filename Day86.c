#include <stdio.h>

enum Menu {ADD=1, SUBTRACT, MULTIPLY};

int main() {
    int a, b, choice;
    scanf("%d %d %d", &a, &b, &choice);

    switch (choice) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
        default: printf("Invalid\n");
    }
    return 0;
}
