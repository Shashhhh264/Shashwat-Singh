// Program to check if a number is prime.

#include <stdio.h>
#include <math.h> 

int main() {
    int n, i;
    int is_prime = 1; 
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    
    if (n <= 1) {
        is_prime = 0;
    } 
    else if (n == 2) {
        is_prime = 1; 
    } 
    else if (n % 2 == 0) {
        is_prime = 0; 
    }
    
    
    else {
       
        int limit = (int)sqrt(n);
        
        for (i = 3; i <= limit; i += 2) {
            if (n % i == 0) {
                is_prime = 0; 
                break;       
            }
        }
    }

    
    if (is_prime == 1) {
        printf("%d is a PRIME number. 🎉\n", n);
    } else {
        printf("%d is NOT a prime number.😔\n", n);
    }

    return 0;
}