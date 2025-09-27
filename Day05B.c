// Program to convert time in seconds to HH:MM:SS format

#include <stdio.h>

int main() {
    long total_seconds; 
    int hours, minutes, seconds;

    
    printf("Enter time in seconds: ");
    scanf("%ld", &total_seconds);

    
    if (total_seconds < 0) {
        printf("Time cannot be negative.\n");
        return 1;
    }

    
    hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("\nConversion Result:\n");
    printf("Total Seconds: %ld\n", total_seconds);
    printf("Time (HH:MM:SS): %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}