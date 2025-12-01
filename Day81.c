#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    for (int i = SUNDAY; i <= SATURDAY; i++)
        printf("%d\n", i);
    return 0;
}
