// Count characters in a string without using built-in length functions.
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[count] != '\0')
        count++;
    printf("Length of string = %d", count);
    return 0;
}
