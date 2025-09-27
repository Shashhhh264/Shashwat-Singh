// Program to check if a character is uppercase, lowercase, digit, or special character

#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch); 

    
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an UPPERCASE alphabet.\n", ch);
    }
   
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a LOWERCASE alphabet.\n", ch);
    }
    
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a DIGIT.\n", ch);
    }
   
    else {
        printf("The character '%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}