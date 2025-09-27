// Program to check if a character is a vowel or a consonant

#include <stdio.h>

int main() {
    char ch;

   
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); 
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
       
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            
            printf("The character '%c' is a VOWEL.\\n", ch);
        } 
        
        else {
            printf("The character '%c' is a CONSONANT.\\n", ch);
        }
    } 
    
    else {
        printf("Error: '%c' is not an alphabet.\\n", ch);
    }

    return 0;
}