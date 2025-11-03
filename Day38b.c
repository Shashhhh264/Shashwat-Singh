#include <stdio.h>

int main() {
    int n, symmetric=1;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
                symmetric=0;

    if(symmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");
    return 0;
}
