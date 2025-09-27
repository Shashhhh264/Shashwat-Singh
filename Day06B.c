// Program to check if an integer is positive, negative, or zero
// using a nested if-else structure.

#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\\n");
        return 1; 
    }

    
    if (number == 0) {
        printf("The number is ZERO.\\n");
    } 
    
    else {
        
        if (number > 0) {
            
            printf("The number %d is POSITIVE.\\n", number);
        } 
        else {
            
            printf("The number %d is NEGATIVE.\\n", number);
        }
    }

    return 0;
}