#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");

    if (!fp1 || !fp2) {
        printf("Error opening files.\n");
        return 1;
    }

    int c;
    while ((c = fgetc(fp1)) != EOF) {
        if (islower(c)) c = toupper(c);
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Conversion done.\n");
    return 0;
}
