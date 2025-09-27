// Program to convert a decimal number to its binary equivalent.

#include <stdio.h>

int main() {
    int decimal_num;
    int binary_array[32]; 
    int i = 0;          
    
  
    printf("Enter a positive integer: ");
    if (scanf("%d", &decimal_num) != 1 || decimal_num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

   
    if (decimal_num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    
    int temp_num = decimal_num;
    while (temp_num > 0) {
      
        binary_array[i] = temp_num % 2; 
        
        temp_num = temp_num / 2;
        
        
        i++;
    }

   
    printf("Binary equivalent of %d is: ", decimal_num);
    
   
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_array[j]);
    }
    
    printf("\n");

    return 0;
}