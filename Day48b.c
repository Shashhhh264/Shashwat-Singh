#include <stdio.h>
#include <string.h>
void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);
    char *word_start = str, *temp = str;
    while (*temp) {
        temp++;
        if (*temp == ' ' || *temp == '\0') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
    printf("Result: %s", str);
    return 0;
}
