#include <stdio.h>

int main() {
    int n, distinct=1;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i][i]==a[j][j])
                distinct=0;

    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}
