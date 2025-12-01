#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("Employee Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%04d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}
