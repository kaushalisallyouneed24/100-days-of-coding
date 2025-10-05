#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum = 0;

    // Input size
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    // Output result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
