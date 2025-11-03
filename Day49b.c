#include <stdio.h>
#include <string.h>
int main() {
    char name[100], last[50];
    printf("Enter full name: ");
    gets(name);
    int len = strlen(name), i, lastStart = 0;
    for (i = len - 1; i >= 0; i--)
        if (name[i] == ' ') { lastStart = i + 1; break; }
    printf("%c", name[0]);
    for (i = 1; name[i] != '\0'; i++)
        if (name[i - 1] == ' ' && i < lastStart - 1)
            printf(".%c", name[i]);
    printf(" %s", &name[lastStart]);
    return 0;
}
