// Program to check if an integer is even or odd using if-else.

#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer: ");
    
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; 
    }

    
    if (number % 2 == 0) {
       
        printf("The number %d is EVEN.\n", number);
    } 
    else {
        
        printf("The number %d is ODD.\n", number);
    }

    return 0;
}