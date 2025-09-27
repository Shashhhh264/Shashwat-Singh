// Program to calculate the factorial of a given number N.

#include <stdio.h>

int main() {
    int n;          
    int i;           
    long long factorial = 1; 

    // 1. Get user input for N
    printf("Enter a non-negative integer (N): ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } 
    else if (n == 0) {
       
        printf("The factorial of 0 is: 1\\n");
    } 
    
    
    else {
        
        for (i = 1; i <= n; i++) {
            factorial *= i; 
        }

        
        printf("The factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}