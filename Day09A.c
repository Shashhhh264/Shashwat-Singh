// Program to find the roots of a quadratic equation and categorize them

#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;
    double discriminant;
    double root1, root2;
    double real_part, imag_part;

    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c):\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    
    if (a == 0) {
        printf("Error: 'a' cannot be zero. This is a linear equation, not a quadratic one.\\n");
        return 1;
    }

    
    discriminant = b * b - 4 * a * c;

   

    if (discriminant > 0) {
        // Case 1: Discriminant is Positive
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("\nRoots Category: TWO DISTINCT REAL ROOTS\n");
        printf("Root 1 = %.4lf\n", root1);
        printf("Root 2 = %.4lf\n", root2);
    } 
    else if (discriminant == 0) {
        // Case 2: Discriminant is Zero
        
        root1 = root2 = -b / (2 * a);
        
        printf("\nRoots Category: TWO EQUAL REAL ROOTS\n");
        printf("Root 1 = Root 2 = %.4lf\n", root1);
    } 
    else { // discriminant < 0
        // Case 3: Discriminant is Negative
        
        // Roots are complex (imaginary)
        real_part = -b / (2 * a);
        imag_part = sqrt(-discriminant) / (2 * a);
        
        printf("\nRoots Category: TWO DISTINCT COMPLEX ROOTS\n");
        printf("Root 1 = %.4lf + %.4lf\n", real_part, imag_part);
        printf("Root 2 = %.4lf - %.4lf\n", real_part, imag_part);
    }

    return 0;
}