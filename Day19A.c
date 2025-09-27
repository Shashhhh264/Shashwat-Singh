// Program to find the LCM of two numbers using the HCF (GCD) formula.

#include <stdio.h>


int find_hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter the first positive integer: ");
    if (scanf("%d", &num1) != 1 || num1 <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter the second positive integer: ");
    if (scanf("%d", &num2) != 1 || num2 <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

   
    hcf = find_hcf(num1, num2);

    
    lcm = (long long)num1 * num2 / hcf;

    printf("\nCalculation:\n");
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}