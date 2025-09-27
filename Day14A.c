// Program to calculate the sum of the first N odd numbers using a loop.

#include <stdio.h>

int main() {
    int n;          
    int sum = 0;    
    int i;          
   
    printf("Enter the positive integer (N) for the number of odd terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer for N.\n");
        return 1;
    }

   
    printf("\nThe first %d odd numbers are: ", n);
    
    
    for (i = 1; i <= n; i++) {
        int odd_num = 2 * i - 1;
        sum = sum + odd_num;
        printf("%d ", odd_num);
    }
    
    printf("\n---------------------------------\n");
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}