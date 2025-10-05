#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int row, col, i, j;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("\nSum of the two matrices:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
