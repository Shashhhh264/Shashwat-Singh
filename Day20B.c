// Program to find the 1's complement of a binary number (represented as a string).

#include <stdio.h>
#include <string.h> 
#define MAX_SIZE 100 

int main() {
    char binary_num[MAX_SIZE];
    int length;
    int i;

    
    printf("Enter a binary number (sequence of 0s and 1s): ");
    scanf("%s", binary_num);

    length = strlen(binary_num);

    
    for (i = 0; i < length; i++) {
        if (binary_num[i] != '0' && binary_num[i] != '1') {
            printf("Error: Invalid input. Please enter a number containing only 0s and 1s.\\n");
            return 1;
        }
    }

    
    printf("\nOriginal Binary Number: %s\n", binary_num);
    printf("1's Complement:         ");

    for (i = 0; i < length; i++) {
        
        if (binary_num[i] == '0') {
            printf("1");
        }
       
        else {
            printf("0");
        }
    }

    printf("\n");
    return 0;
}