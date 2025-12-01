#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) {
        printf("File not found\n");
        return 1;
    }

    int x, sum = 0, count = 0;
    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found.\n");
        return 0;
    }

    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);
    return 0;
}
