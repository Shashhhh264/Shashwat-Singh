// Program to check if a given year is a leap year

#include <stdio.h>

int main() {
    int year;

   
    printf("Enter a year (e.g., 2024): ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        
        printf("%d is a LEAP YEAR.\\n", year);
    } 
    else {
        printf("%d is NOT a leap year.\\n", year);
    }

    return 0;
}