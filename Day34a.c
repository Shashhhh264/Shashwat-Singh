//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter position and value: ");
    scanf("%d %d",&pos,&val);

    for(int i=n;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[pos-1]=val;
    n++;

    printf("Array after insertion:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
