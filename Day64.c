#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s); // no spaces
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int len = strlen(s);
    int start = 0, maxLen = 0;

    for (int i = 0; i < len; i++) {
        unsigned char c = s[i];
        if (last[c] >= start)
            start = last[c] + 1;
        last[c] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
