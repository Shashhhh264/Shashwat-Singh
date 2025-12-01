#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001];
    scanf("%s", s);
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int cnt[26] = {0};
    for (int i = 0; s[i]; i++)
        cnt[s[i] - 'a']++;
    for (int i = 0; t[i]; i++)
        cnt[t[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
