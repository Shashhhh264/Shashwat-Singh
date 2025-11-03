// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long n;
    printf("Enter a number: ");
    scanf("%ld",&n);
    int freq[10]={0};

    while(n>0){
        int digit=n%10;
        freq[digit]++;
        n/=10;
    }

    int max=0, most=0;
    for(int i=0;i<10;i++){
        if(freq[i]>max){
            max=freq[i];
            most=i;
        }
    }

    printf("Digit that occurs most times: %d\n",most);
    return 0;
}
