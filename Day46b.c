#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[26] = {0};
    printf("Enter a lowercase string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (++freq[str[i]-'a'] == 2) {
            printf("First repeating letter: %c", str[i]);
            return 0;
        }
    }
    printf("No repeating character found.");
    return 0;
}
