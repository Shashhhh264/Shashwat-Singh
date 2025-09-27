// Program to find the sum using the direct mathematical formula.

#include <stdio.h>

int main() {
    int n;
    long long sum; 

    printf("Enter the positive integer (N) up to which you want the sum: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive integer.\\n");
        return 1;
    }

    
    sum = (long long)n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %lld\\n", n, sum);

    return 0;
}