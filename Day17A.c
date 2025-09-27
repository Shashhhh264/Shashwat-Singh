// Program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h> 

int main() {
    int n, original_n, temp_n;
    int digit_count = 0;
    int remainder;
    double sum = 0.0;

    
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    original_n = n;
    temp_n = n;

    
    while (temp_n != 0) {
        temp_n /= 10;
        digit_count++;
    }

   
    temp_n = n; 
    
    while (temp_n != 0) {
        remainder = temp_n % 10; 
        
        
        sum = sum + pow(remainder, digit_count); 
        
        temp_n /= 10; 
    }

    
    if ((int)sum == original_n) {
        printf("The number %d is an ARMSTRONG number.🎉\n", original_n);
    } else {
        printf("The number %d is NOT an Armstrong number.😞\n", original_n);
    }

    return 0;
}