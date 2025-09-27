// Program to reverse a given integer.

#include <stdio.h>

int main() {
    int n, reversed_number = 0, remainder;
    
   
    printf("Enter an integer: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    int original_n = n;
    
    if (n < 0) {
        n = -n;
    }

 
    while (n != 0) {
      
        remainder = n % 10; 
        reversed_number = reversed_number * 10 + remainder;
        
        
        n /= 10; 
    }

    
    if (original_n < 0) {
        reversed_number = -reversed_number;
    }
    
    printf("The reverse of %d is: %d\n", original_n, reversed_number);

    return 0;
}