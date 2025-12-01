#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));

    scanf("%s", s->name);
    scanf("%d", &s->roll);
    scanf("%f", &s->marks);

    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    return 0;
}
