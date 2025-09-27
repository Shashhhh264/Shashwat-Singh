// Program to find the product of odd digits of an integer.

#include <stdio.h>

int main() {
    int n;
    long long product = 1; 
    int remainder;
    int has_odd_digit = 0; 
    
    printf("Enter an integer: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    int original_n = n; 

  
    if (n < 0) {
        n = -n;
    }
    
    
    if (n == 0) {
        printf("The product of odd digits in 0 is 0.\n");
        return 0;
    }

    
    while (n != 0) {
        
        remainder = n % 10; 
        
        
        if (remainder % 2 != 0) {
            product = product * remainder; 
            has_odd_digit = 1;             
        }
        
        
        n /= 10; 
    }

   
    if (has_odd_digit) {
        printf("The product of odd digits in %d is: %lld\n", original_n, product);
    } else {
        
        printf("The number %d contains no odd digits. Product remains 1.\n", original_n);
    }

    return 0;
}