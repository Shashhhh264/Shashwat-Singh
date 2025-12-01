#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    if (!fp) {
        printf("File not found\n");
        return 1;
    }

    char c;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) inWord = 0;
        else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
