// Program to find and print all factors (divisors) of a given number.

#include <stdio.h>
#include <math.h> 

int main() {
    int n, i;

  
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    printf("\nFactors of %d are: ", n);

    
    int limit = (int)sqrt(n);
    
    
    for (i = 1; i <= limit; i++) {
      
        if (n % i == 0) {
            
           
            printf("%d", i);

      
            if (i != (n / i)) {
                printf(", %d", n / i);
            }
            
            
            printf(", "); 
        }
    }
    
   
    printf("\b\b\n"); 

    return 0;
}