// Write a program to check if a number is a strong number.
#include <stdio.h>
#include<math.h>

int main() {
    int num, temp, rem, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        rem = num % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        num /= 10;
    }

    if (sum == temp)
        printf("%d is a Strong Number.\n", temp);
    else
        printf("%d is not a Strong Number.\n", temp);

    return 0;
}
