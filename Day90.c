#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", &p.g);

    printf("Name: %s\n", p.name);
    printf("Gender: %s\n", p.g==MALE ? "Male" : "Female");

    return 0;
}
