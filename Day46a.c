#include <stdio.h>
int main() {
    char str[200], res[200];
    int j = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            res[j++] = str[i];
    }
    res[j] = '\0';
    printf("Without vowels: %s", res);
    return 0;
}
