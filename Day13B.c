// Program to print natural numbers from 1 up to N

#include <stdio.h>

int main() {
    int n;          
    int i;          

    
    printf("Enter the positive integer (N) up to which you want to print the numbers: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    printf("\nNumbers from 1 to %d are:\n", n);
    
    
    for (i = 1; i <= n; i++) {
        printf("%d ", i); 
    }
    
    printf("\n"); 
    return 0;
}