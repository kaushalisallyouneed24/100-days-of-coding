#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int row, col, i, j;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Print transpose
    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < col; i++) {
        for(j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
