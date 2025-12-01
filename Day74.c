#include <stdio.h>

int main() {
    char src[50], dest[50];
    scanf("%s %s", src, dest);

    FILE *fs = fopen(src, "r");
    if (!fs) {
        printf("Source file not found\n");
        return 1;
    }

    FILE *fd = fopen(dest, "w");

    int ch;
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);

    printf("File copied successfully.\n");
    return 0;
}
