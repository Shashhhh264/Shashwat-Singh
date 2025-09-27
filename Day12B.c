// Program to calculate electricity bill based on tiered units consumed

#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    int remaining_units;

    printf("--- Electricity Bill Calculator ---\n");
    
    // 1. Get units consumed
    printf("Enter total units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a valid non-negative integer for units.\n");
        return 1;
    }
    
    // Copy total units to a working variable
    remaining_units = units;

    // 2. Apply the highest tier rate first (Above 300 units)
    if (remaining_units > 300) {
        // Units above 300: (units - 300) at ₹12/unit
        bill += (remaining_units - 300) * 12.0;
        remaining_units = 300; // Recalculate bill for the remaining 300 units
    }

    // 3. Apply the next tier rate (201 to 300 units)
    if (remaining_units > 200) {
        // Units 201 to 300: (units - 200) at ₹10/unit (Max 100 units)
        bill += (remaining_units - 200) * 10.0;
        remaining_units = 200; // Recalculate bill for the remaining 200 units
    }

    // 4. Apply the next tier rate (101 to 200 units)
    if (remaining_units > 100) {
        // Units 101 to 200: (units - 100) at ₹7/unit (Max 100 units)
        bill += (remaining_units - 100) * 7.0;
        remaining_units = 100; // Recalculate bill for the remaining 100 units
    }

    // 5. Apply the lowest tier rate (1 to 100 units)
    if (remaining_units > 0) {
        // Units 1 to 100: (units) at ₹5/unit
        bill += remaining_units * 5.0;
    }

    // 6. Display the result
    printf("\n--- Bill Summary ---\n");
    printf("Total Units Consumed: %d\n", units);
    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}