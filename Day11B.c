// Program to calculate Profit or Loss percentage

#include <stdio.h>

int main() {
    float cost_price, selling_price;
    float profit, loss;
    float percentage;

    printf("--- Profit/Loss Percentage Calculator ---\n");

    
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);

   
    if (cost_price <= 0 || selling_price <= 0) {
        printf("Error: Price must be positive.\n");
        return 1;
    }
    
    if (selling_price > cost_price) {
        
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100.0;

        printf("\nResult: PROFIT\n");
        printf("Profit Amount: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } 
    
    else if (selling_price < cost_price) {
        
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100.0;
        
        printf("\nResult: LOSS\n");
        printf("Loss Amount: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } 
    
    else {
       
        printf("\nResult: NO PROFIT, NO LOSS (SP = CP)\n");
    }

    return 0;
}