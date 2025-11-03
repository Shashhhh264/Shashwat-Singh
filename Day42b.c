//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter lowercase string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("Uppercase: %s", str);
    return 0;
}
