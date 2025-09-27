// Program to calculate the product of even numbers from 1 to N.

#include <stdio.h>

int main() {
    int n;           
    int i;           
    long long product = 1; 

    
    printf("Enter the positive integer (N) up to which you want to calculate the product: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }
    
    printf("\nEven numbers multiplied: ");

    
    for (i = 1; i <= n; i++) {
        
        if (i % 2 == 0) {
            product = product * i; 
            printf(" %d", i);
            
           
            if (i < n && (i + 1) % 2 != 0 && i != n - 1) { 
                 
            } else if (i + 2 <= n) {
                printf(" * ");
            }
        }
    }
    
    printf(" = %lld\n", product);
    
  
    if (n < 2) {
        printf("No even numbers found in the range 1 to %d, product remains 1.\n", n);
    }

    return 0;
}