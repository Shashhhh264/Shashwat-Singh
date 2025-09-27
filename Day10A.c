// Program to classify a triangle based on its side lengths.

#include <stdio.h>

int main() {
    float s1, s2, s3;

    
    printf("Enter the length of side 1: ");
    scanf("%f", &s1);
    printf("Enter the length of side 2: ");
    scanf("%f", &s2);
    printf("Enter the length of side 3: ");
    scanf("%f", &s3);

    
    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1 || s1 <= 0 || s2 <= 0 || s3 <= 0) {
        printf("\nError: The given side lengths cannot form a valid triangle.\n");
        printf("A valid triangle requires the sum of any two sides to be greater than the third.\n");
    }
    
   
    else {
        
        if (s1 == s2 && s2 == s3) {
            printf("\nThe triangle is EQUILATERAL (All sides are equal).\n");
        }
       
        else if (s1 == s2 || s1 == s3 || s2 == s3) {
            printf("\nThe triangle is ISOSCELES (Exactly two sides are equal).\n");
        }
        
        else {
            printf("\nThe triangle is SCALENE (No sides are equal).\n");
        }
    }

    return 0;
}