#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for (int i = 0; str1[i]; i++) count1[tolower(str1[i]) - 'a']++;
    for (int i = 0; str2[i]; i++) count2[tolower(str2[i]) - 'a']++;
    for (int i = 0; i < 26; i++)
        if (count1[i] != count2[i]) {
            printf("Not anagrams");
            return 0;
        }
    printf("Anagrams");
    return 0;
}
