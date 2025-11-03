#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            char sub[100];
            strncpy(sub, str + i, j);
            sub[j] = '\0';
            printf("%s\n", sub);
        }
    }
    return 0;
}
