#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1001];
    // read whole line including spaces
    fgets(s, sizeof(s), stdin);

    // convert to lowercase first
    for (int i = 0; s[i]; i++)
        s[i] = tolower((unsigned char)s[i]);

    int capNext = 1; // capitalize first letter
    for (int i = 0; s[i]; i++) {
        if (capNext && isalpha((unsigned char)s[i])) {
            s[i] = toupper((unsigned char)s[i]);
            capNext = 0;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            capNext = 1;
    }

    printf("%s", s);
    return 0;
}
