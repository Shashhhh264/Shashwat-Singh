#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[idx].marks)
            idx = i;

    return s[idx];
}

int main() {
    struct Student s[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    struct Student topper = getTopper(s, 5);

    printf("Topper:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
