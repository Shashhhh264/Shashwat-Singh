// Program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original_n, reversed_n = 0, remainder , temp_n = n;
    
    
    printf("Enter an integer: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    original_n = n; 

    
    if (n < 0) {
        printf("%d is NOT a palindrome (negative numbers usually aren't)." , original_n);
        return 0;
    }


    while (temp_n != 0) {
        
        remainder = temp_n % 10; 
        
        
        if (reversed_n > (2147483647 / 10)) { 
            printf("Error: Reversed number overflowed integer limit.\n");
            return 1;
        }
        reversed_n = reversed_n * 10 + remainder;
        
        
        temp_n /= 10; 
    }

    
    printf("Original: %d, Reversed: %d\n", original_n, reversed_n);

    if (original_n == reversed_n) {
        printf("The number %d is a PALINDROME. 🎉\n", original_n);
    } else {
        printf("The number %d is NOT a palindrome. 😞\n", original_n);
    }

    return 0;
}
