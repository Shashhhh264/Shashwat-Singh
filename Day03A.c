//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float C,conversion;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &C);
    conversion= (C*9/5)+32;

    printf("The temperature in Fahrenheit is %f: ",conversion);
    return 0;
}