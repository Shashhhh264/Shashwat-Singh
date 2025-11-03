#include <stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            str[i] = '-';
    printf("Result: %s", str);
    return 0;
}
