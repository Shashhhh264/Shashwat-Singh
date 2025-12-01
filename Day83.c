#include <stdio.h>

enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    enum Month m;
    scanf("%d", &m);

    int days;

    if (m == FEB) days = 28;
    else if (m==APR || m==JUN || m==SEP || m==NOV) days = 30;
    else days = 31;

    printf("%d days\n", days);
    return 0;
}
