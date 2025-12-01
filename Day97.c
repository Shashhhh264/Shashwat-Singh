#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    // Input
    scanf("%s", e1.name);
    scanf("%d", &e1.id);
    scanf("%f", &e1.salary);

    // Write to file
    FILE *fp = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    // Read back
    fp = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
