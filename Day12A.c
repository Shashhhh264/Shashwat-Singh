// Program to calculate library fine based on late days.

#include <stdio.h>

int main() {
    int late_days;
    float fine = 0.0;

    printf("--- Library Fine Calculator ---\n");
    
    // 1. Get input
    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &late_days) != 1 || late_days < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    // 2. Check for Membership Cancellation
    if (late_days > 30) {
        printf("\nALERT: Membership is CANCELLED.\n");
        printf("You returned the book %d days late.\n", late_days);
    }
    
    // 3. Calculate Fine using Tiered Logic
    else {
        // Tier 3: Next 20 days (Days 11 to 30) at ₹6/day
        if (late_days > 10) {
            // Calculate fine for days 11 through 'late_days' (max 20 days)
            fine += (late_days - 10) * 6.0;
            // The remaining days (10) will be processed in the next tiers
            late_days = 10;
        }

        // Tier 2: Next 5 days (Days 6 to 10) at ₹4/day
        if (late_days > 5) {
            // Calculate fine for days 6 through 10 (max 5 days)
            fine += (late_days - 5) * 4.0;
            // The remaining days (5) will be processed in the next tier
            late_days = 5;
        }

        // Tier 1: First 5 days (Days 1 to 5) at ₹2/day
        if (late_days > 0) {
            // Calculate fine for days 1 through 5 (max 5 days)
            fine += late_days * 2.0;
        }

        // 4. Display Result
        printf("\nFine Calculation:\n");
        printf("Total Library Fine Due: ₹%.2f\n", fine);
    }

    return 0;
}