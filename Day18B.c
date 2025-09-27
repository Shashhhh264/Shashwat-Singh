// Program to find the HCF (GCD) of two numbers using the Euclidean Algorithm.

#include <stdio.h>


int calculate_gcd(int a, int b) {
    int temp;
    
  
    while (b != 0) {
        
        temp = a % b;
        
        
        a = b;
        
        
        b = temp;
    }
    
   
    return a;
}

int main() {
    int num1, num2, result;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    
    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\\n");
        return 1;
    }

    result = calculate_gcd(num1, num2);

    printf("\nThe HCF (GCD) of %d and %d is: %d\\n", num1, num2, result);

    return 0;
}