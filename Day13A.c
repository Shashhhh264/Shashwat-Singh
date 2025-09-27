// Program to implement a basic calculator using switch-case.

#include <stdio.h>

int main() {
    char operator;
    double n1, n2;

    printf("--- Basic Calculator ---\\n");

    // 1. Get operator input
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Note the space before %c

    // 2. Get operand input
    printf("Enter two operands: ");
    // Use %lf for double type variables
    if (scanf("%lf %lf", &n1, &n2) != 2) {
        printf("Invalid input. Please enter valid numbers.\\n");
        return 1;
    }

    // 3. Use switch-case to perform the operation
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\\n", n1, n2, n1 + n2);
            break;
            
        case '-':
            printf("%.2lf - %.2lf = %.2lf\\n", n1, n2, n1 - n2);
            break;
            
        case '*':
            printf("%.2lf * %.2lf = %.2lf\\n", n1, n2, n1 * n2);
            break;
            
        case '/':
            // Check for division by zero before performing the operation
            if (n2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\\n", n1, n2, n1 / n2);
            } else {
                printf("Error: Division by zero is not allowed.\\n");
            }
            break;
            
        case '%':
            // Modulo operator (%) only works with integers in C
            if (n2 != 0) {
                printf("%.0lf %% %.0lf = %d\\n", n1, n2, (int)n1 % (int)n2);
            } else {
                printf("Error: Modulo by zero is not allowed.\\n");
            }
            break;
            
        default:
            // Handles any character that doesn't match the valid operators
            printf("Error: Invalid operator entered.\\n");
    }

    return 0;
}