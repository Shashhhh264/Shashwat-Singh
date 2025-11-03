// Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r,c,sum=0;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    printf("Sum of all elements: %d\n",sum);
    return 0;
}
