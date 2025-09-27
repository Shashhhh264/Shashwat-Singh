// Program to convert a percentage score into a letter grade.

#include <stdio.h>

int main() {
    float percentage;

    
    printf("Enter the percentage score (0-100): ");
    
   
    if (scanf("%f", &percentage) != 1) {
        printf("Invalid input. Please enter a numerical percentage.\n");
        return 1;
    }

    
    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
    }

    
    else if (percentage >= 90) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) {
        
        printf("Grade: B\n");
    } 
    else if (percentage >= 70) {
       
        printf("Grade: C\n");
    } 
    else if (percentage >= 60) {
        
        printf("Grade: D\n");
    } 
    else {
        
        printf("Grade: F\n");
    }

    return 0;
}