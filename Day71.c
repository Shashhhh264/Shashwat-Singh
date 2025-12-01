#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    char name[50];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data saved successfully.\n");
    return 0;
}
