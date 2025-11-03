#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;
    printf("Enter a sentence: ");
    gets(str);
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > max) {
                max = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (j > max) strcpy(longest, word);
    printf("Longest word: %s", longest);
    return 0;
}
