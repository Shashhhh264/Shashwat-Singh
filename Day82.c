#include <stdio.h>

enum Light {RED, YELLOW, GREEN};

int main() {
    enum Light s;
    scanf("%d", &s);

    if (s == RED) printf("Stop\n");
    else if (s == YELLOW) printf("Wait\n");
    else if (s == GREEN) printf("Go\n");
    else printf("Invalid\n");

    return 0;
}
