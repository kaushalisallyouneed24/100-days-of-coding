#include <stdio.h>

int main() {
    int i, j, m, n, sum=0;
    scanf("%d %d",&m,&n); // Rows and columns
    int a[m][n];

    // Read matrix elements
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
            sum += a[i][j]; // Add element to sum
        }
    }

    printf("%d", sum); // Print total sum
    return 0;
}
