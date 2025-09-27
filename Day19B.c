// Program to find the sum of the digits of an integer.

#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    
   
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
        
        
        sum = sum + remainder;
        
        
        n /= 10; 
    }

   
    printf("The sum of the digits of %d is: %d\n", original_n, sum);

    return 0;
}