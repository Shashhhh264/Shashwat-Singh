#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    if (!fp) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[200];
    fgets(line, sizeof(line), stdin); // read newline from previous input
    fgets(line, sizeof(line), stdin); // actual text

    fputs(line, fp);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
