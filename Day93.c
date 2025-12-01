#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("Top Student:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll No: %d\n", s[maxIndex].roll_no);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
