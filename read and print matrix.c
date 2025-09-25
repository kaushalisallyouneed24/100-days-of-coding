#include <stdio.h>

int main() {
    int i, j, m, n;
    scanf("%d %d",&m,&n); // Rows and columns
    int a[m][n];

    // Read matrix elements
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    // Print matrix
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
