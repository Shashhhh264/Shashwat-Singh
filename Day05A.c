// Program to calculate Simple Interest (SI)

#include <stdio.h>
#include<math.h>

int main() {
    float principal, rate, time, amount;
    float simple_interest;
    double compound_interest;

    printf("--- Simple and Compund Interest Calculator ---\n");

    
    printf("Enter Principal Amount (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (R in %%): ");
    scanf("%f", &rate);

    printf("Enter Time in years (T): ");
    scanf("%f", &time);

   
    simple_interest = (principal * rate * time) / 100.0;
    amount = ( principal * pow(1 + rate / 100.0, time));
    compound_interest = amount - principal;
    
    printf("\nCalculation:\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Time Period: %.2f years\n", time);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("----------------------------------\n");
    printf("Simple Interest (SI): %.2f\n", simple_interest);
    printf("Compund Interest (CI): %.2lf\n", compound_interest);
    printf("Total Amount Payable: %.2f\n", principal + simple_interest);
    printf("Total Payable amount of CI: %.2lf ", compound_interest);

    return 0;
}