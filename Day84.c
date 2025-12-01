#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;
    scanf("%d", &s);

    if (s == SUCCESS) printf("Success\n");
    else if (s == FAILURE) printf("Failure\n");
    else if (s == TIMEOUT) printf("Timeout\n");
    else printf("Invalid\n");

    return 0;
}
