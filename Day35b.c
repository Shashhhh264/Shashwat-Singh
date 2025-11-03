//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    k%=n;

    int res[n];
    for(int i=0;i<n;i++)
        res[(i+k)%n]=arr[i];

    printf("Array after rotation:\n");
    for(int i=0;i<n;i++)
        printf("%d ",res[i]);
    return 0;
}
