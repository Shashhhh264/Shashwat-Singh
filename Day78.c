#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (!fp) {
        printf("File not found.\n");
        return 1;
    }

    int v = 0, c = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char x = tolower(ch);
            if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                v++;
            else
                c++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
